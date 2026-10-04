library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity add_sub_8bit_tb is
end add_sub_8bit_tb;

architecture Behavioral of add_sub_8bit_tb is

    component add_sub_8bit
        Port (
            A    : in  STD_LOGIC_VECTOR(7 downto 0);
            B    : in  STD_LOGIC_VECTOR(7 downto 0);
            SUB  : in  STD_LOGIC;
            Y    : out STD_LOGIC_VECTOR(7 downto 0);
            Cout : out STD_LOGIC
        );
    end component;

    signal A    : STD_LOGIC_VECTOR(7 downto 0) := "00000000";
    signal B    : STD_LOGIC_VECTOR(7 downto 0) := "00000000";
    signal SUB  : STD_LOGIC := '0';
    signal Y    : STD_LOGIC_VECTOR(7 downto 0);
    signal Cout : STD_LOGIC;

begin

    uut: add_sub_8bit
        port map (
            A    => A,
            B    => B,
            SUB  => SUB,
            Y    => Y,
            Cout => Cout
        );

    stimulus: process
    begin

        -- ADD: 5 + 3 = 8
        A <= "00000101";
        B <= "00000011";
        SUB <= '0';
        wait for 100 ns;

        -- ADD: 15 + 10 = 25
        A <= "00001111";
        B <= "00001010";
        SUB <= '0';
        wait for 100 ns;

        -- ADD: 255 + 1 = 0, Carry = 1
        A <= "11111111";
        B <= "00000001";
        SUB <= '0';
        wait for 100 ns;

        -- SUB: 5 - 3 = 2
        A <= "00000101";
        B <= "00000011";
        SUB <= '1';
        wait for 100 ns;

        -- SUB: 10 - 5 = 5
        A <= "00001010";
        B <= "00000101";
        SUB <= '1';
        wait for 100 ns;

        -- SUB: 15 - 10 = 5
        A <= "00001111";
        B <= "00001010";
        SUB <= '1';
        wait for 100 ns;

        wait;
    end process;

end Behavioral;