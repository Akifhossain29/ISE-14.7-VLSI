library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity not_8bit_tb is
end not_8bit_tb;

architecture Behavioral of not_8bit_tb is

    component not_8bit
        Port (
            A : in  STD_LOGIC_VECTOR(7 downto 0);
            Y : out STD_LOGIC_VECTOR(7 downto 0)
        );
    end component;

    signal A : STD_LOGIC_VECTOR(7 downto 0) := "00000000";
    signal Y : STD_LOGIC_VECTOR(7 downto 0);

begin

    uut: not_8bit
        port map (
            A => A,
            Y => Y
        );

    stimulus: process
    begin

        A <= "00000000";
        wait for 100 ns;

        A <= "11111111";
        wait for 100 ns;

        A <= "10101010";
        wait for 100 ns;

        A <= "11001100";
        wait for 100 ns;

        A <= "11110000";
        wait for 100 ns;

        wait;
    end process;

end Behavioral;