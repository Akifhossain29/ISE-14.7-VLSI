library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity alu_tb is
end alu_tb;

architecture Behavioral of alu_tb is

    component alu
        Port (
            A    : in  STD_LOGIC_VECTOR(7 downto 0);
            B    : in  STD_LOGIC_VECTOR(7 downto 0);
            SEL  : in  STD_LOGIC_VECTOR(2 downto 0);
            Y    : out STD_LOGIC_VECTOR(7 downto 0);
            Cout : out STD_LOGIC
        );
    end component;

    signal A    : STD_LOGIC_VECTOR(7 downto 0) := "00000000";
    signal B    : STD_LOGIC_VECTOR(7 downto 0) := "00000000";
    signal SEL  : STD_LOGIC_VECTOR(2 downto 0) := "000";
    signal Y    : STD_LOGIC_VECTOR(7 downto 0);
    signal Cout : STD_LOGIC;

begin

    uut: alu
        port map (
            A    => A,
            B    => B,
            SEL  => SEL,
            Y    => Y,
            Cout => Cout
        );

    stimulus: process
    begin

        -- =====================================
        -- AND: 10101010 AND 11001100
        --      = 10001000
        -- =====================================
        A <= "10101010";
        B <= "11001100";
        SEL <= "000";
        wait for 100 ns;

        -- =====================================
        -- OR: 10101010 OR 11001100
        --     = 11101110
        -- =====================================
        SEL <= "001";
        wait for 100 ns;

        -- =====================================
        -- XOR: 10101010 XOR 11001100
        --      = 01100110
        -- =====================================
        SEL <= "010";
        wait for 100 ns;

        -- =====================================
        -- NOT: NOT 10101010
        --      = 01010101
        -- =====================================
        SEL <= "011";
        wait for 100 ns;

        -- =====================================
        -- ADD: 10 + 5 = 15
        -- =====================================
        A <= "00001010";
        B <= "00000101";
        SEL <= "100";
        wait for 100 ns;

        -- =====================================
        -- SUB: 10 - 5 = 5
        -- =====================================
        SEL <= "101";
        wait for 100 ns;

        -- =====================================
        -- ADD: 255 + 1 = 0, Cout = 1
        -- =====================================
        A <= "11111111";
        B <= "00000001";
        SEL <= "100";
        wait for 100 ns;

        -- =====================================
        -- SUB: 15 - 10 = 5
        -- =====================================
        A <= "00001111";
        B <= "00001010";
        SEL <= "101";
        wait for 100 ns;

        wait;

    end process;

end Behavioral;