library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity alu is
    Port (
        A      : in  STD_LOGIC_VECTOR(7 downto 0);
        B      : in  STD_LOGIC_VECTOR(7 downto 0);
        SEL    : in  STD_LOGIC_VECTOR(2 downto 0);
        Y      : out STD_LOGIC_VECTOR(7 downto 0);
        Cout   : out STD_LOGIC
    );
end alu;

architecture Structural of alu is

    component and_8bit
        Port (
            A : in  STD_LOGIC_VECTOR(7 downto 0);
            B : in  STD_LOGIC_VECTOR(7 downto 0);
            Y : out STD_LOGIC_VECTOR(7 downto 0)
        );
    end component;

    component or_8bit
        Port (
            A : in  STD_LOGIC_VECTOR(7 downto 0);
            B : in  STD_LOGIC_VECTOR(7 downto 0);
            Y : out STD_LOGIC_VECTOR(7 downto 0)
        );
    end component;

    component xor_8bit
        Port (
            A : in  STD_LOGIC_VECTOR(7 downto 0);
            B : in  STD_LOGIC_VECTOR(7 downto 0);
            Y : out STD_LOGIC_VECTOR(7 downto 0)
        );
    end component;

    component not_8bit
        Port (
            A : in  STD_LOGIC_VECTOR(7 downto 0);
            Y : out STD_LOGIC_VECTOR(7 downto 0)
        );
    end component;

    component add_sub_8bit
        Port (
            A    : in  STD_LOGIC_VECTOR(7 downto 0);
            B    : in  STD_LOGIC_VECTOR(7 downto 0);
            SUB  : in  STD_LOGIC;
            Y    : out STD_LOGIC_VECTOR(7 downto 0);
            Cout : out STD_LOGIC
        );
    end component;

    component mux_6to1_8bit
        Port (
            AND_IN : in  STD_LOGIC_VECTOR(7 downto 0);
            OR_IN  : in  STD_LOGIC_VECTOR(7 downto 0);
            XOR_IN : in  STD_LOGIC_VECTOR(7 downto 0);
            NOT_IN : in  STD_LOGIC_VECTOR(7 downto 0);
            ADD_IN : in  STD_LOGIC_VECTOR(7 downto 0);
            SUB_IN : in  STD_LOGIC_VECTOR(7 downto 0);
            SEL    : in  STD_LOGIC_VECTOR(2 downto 0);
            Y      : out STD_LOGIC_VECTOR(7 downto 0)
        );
    end component;

    signal AND_RESULT : STD_LOGIC_VECTOR(7 downto 0);
    signal OR_RESULT  : STD_LOGIC_VECTOR(7 downto 0);
    signal XOR_RESULT : STD_LOGIC_VECTOR(7 downto 0);
    signal NOT_RESULT : STD_LOGIC_VECTOR(7 downto 0);

    signal ADD_RESULT : STD_LOGIC_VECTOR(7 downto 0);
    signal SUB_RESULT : STD_LOGIC_VECTOR(7 downto 0);

    signal ADD_COUT   : STD_LOGIC;
    signal SUB_COUT   : STD_LOGIC;

begin

    -- AND operation
    AND_UNIT: and_8bit
        port map (
            A => A,
            B => B,
            Y => AND_RESULT
        );

    -- OR operation
    OR_UNIT: or_8bit
        port map (
            A => A,
            B => B,
            Y => OR_RESULT
        );

    -- XOR operation
    XOR_UNIT: xor_8bit
        port map (
            A => A,
            B => B,
            Y => XOR_RESULT
        );

    -- NOT operation
    NOT_UNIT: not_8bit
        port map (
            A => A,
            Y => NOT_RESULT
        );

    -- ADD operation
    ADD_UNIT: add_sub_8bit
        port map (
            A    => A,
            B    => B,
            SUB  => '0',
            Y    => ADD_RESULT,
            Cout => ADD_COUT
        );

    -- SUB operation
    SUB_UNIT: add_sub_8bit
        port map (
            A    => A,
            B    => B,
            SUB  => '1',
            Y    => SUB_RESULT,
            Cout => SUB_COUT
        );

    -- Select final ALU output
    MUX_UNIT: mux_6to1_8bit
        port map (
            AND_IN => AND_RESULT,
            OR_IN  => OR_RESULT,
            XOR_IN => XOR_RESULT,
            NOT_IN => NOT_RESULT,
            ADD_IN => ADD_RESULT,
            SUB_IN => SUB_RESULT,
            SEL    => SEL,
            Y      => Y
        );

    -- Carry output
    process(SEL, ADD_COUT, SUB_COUT)
    begin

        if SEL = "100" then
            Cout <= ADD_COUT;

        elsif SEL = "101" then
            Cout <= SUB_COUT;

        else
            Cout <= '0';

        end if;

    end process;

end Structural;