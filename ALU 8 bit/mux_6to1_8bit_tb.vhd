library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity mux_6to1_8bit_tb is
end mux_6to1_8bit_tb;

architecture Behavioral of mux_6to1_8bit_tb is

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

    signal AND_IN : STD_LOGIC_VECTOR(7 downto 0) := "00000000";
    signal OR_IN  : STD_LOGIC_VECTOR(7 downto 0) := "00000000";
    signal XOR_IN : STD_LOGIC_VECTOR(7 downto 0) := "00000000";
    signal NOT_IN : STD_LOGIC_VECTOR(7 downto 0) := "00000000";
    signal ADD_IN : STD_LOGIC_VECTOR(7 downto 0) := "00000000";
    signal SUB_IN : STD_LOGIC_VECTOR(7 downto 0) := "00000000";

    signal SEL : STD_LOGIC_VECTOR(2 downto 0) := "000";

    signal Y : STD_LOGIC_VECTOR(7 downto 0);

begin

    uut: mux_6to1_8bit
        port map (
            AND_IN => AND_IN,
            OR_IN  => OR_IN,
            XOR_IN => XOR_IN,
            NOT_IN => NOT_IN,
            ADD_IN => ADD_IN,
            SUB_IN => SUB_IN,
            SEL    => SEL,
            Y      => Y
        );

    stimulus: process
    begin

        -- Give different values to every operation
        AND_IN <= "00000001";
        OR_IN  <= "00000010";
        XOR_IN <= "00000011";
        NOT_IN <= "00000100";
        ADD_IN <= "00000101";
        SUB_IN <= "00000110";

        -- Select AND
        SEL <= "000";
        wait for 100 ns;

        -- Select OR
        SEL <= "001";
        wait for 100 ns;

        -- Select XOR
        SEL <= "010";
        wait for 100 ns;

        -- Select NOT
        SEL <= "011";
        wait for 100 ns;

        -- Select ADD
        SEL <= "100";
        wait for 100 ns;

        -- Select SUB
        SEL <= "101";
        wait for 100 ns;

        wait;
    end process;

end Behavioral;