library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity or_8bit_tb is
end or_8bit_tb;

architecture Behavioral of or_8bit_tb is

    component or_8bit
        Port (
            A : in  STD_LOGIC_VECTOR(7 downto 0);
            B : in  STD_LOGIC_VECTOR(7 downto 0);
            Y : out STD_LOGIC_VECTOR(7 downto 0)
        );
    end component;

    signal A : STD_LOGIC_VECTOR(7 downto 0) := "00000000";
    signal B : STD_LOGIC_VECTOR(7 downto 0) := "00000000";
    signal Y : STD_LOGIC_VECTOR(7 downto 0);

begin

    uut: or_8bit
        port map (
            A => A,
            B => B,
            Y => Y
        );

    stimulus: process
    begin

        A <= "00000000";
        B <= "00000000";
        wait for 100 ns;

        A <= "11111111";
        B <= "00000000";
        wait for 100 ns;

        A <= "10101010";
        B <= "11001100";
        wait for 100 ns;

        A <= "11110000";
        B <= "00001111";
        wait for 100 ns;

        A <= "00000001";
        B <= "00000010";
        wait for 100 ns;

        wait;
    end process;

end Behavioral;