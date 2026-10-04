library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity register_8bit_tb is
end register_8bit_tb;

architecture Behavioral of register_8bit_tb is

    component register_8bit
        Port (
            D     : in  STD_LOGIC_VECTOR(7 downto 0);
            CLK   : in  STD_LOGIC;
            RESET : in  STD_LOGIC;
            Q     : out STD_LOGIC_VECTOR(7 downto 0)
        );
    end component;

    signal D     : STD_LOGIC_VECTOR(7 downto 0) := "00000000";
    signal CLK   : STD_LOGIC := '0';
    signal RESET : STD_LOGIC := '0';
    signal Q     : STD_LOGIC_VECTOR(7 downto 0);

begin

    uut: register_8bit
        port map (
            D     => D,
            CLK   => CLK,
            RESET => RESET,
            Q     => Q
        );

    clock_process: process
    begin

        CLK <= '0';
        wait for 50 ns;

        CLK <= '1';
        wait for 50 ns;

    end process;

    stimulus: process
    begin

        -- Reset
        RESET <= '1';
        D <= "00000000";
        wait for 100 ns;

        -- Store 10101010
        RESET <= '0';
        D <= "10101010";
        wait for 100 ns;

        -- Store 11001100
        D <= "11001100";
        wait for 100 ns;

        -- Store 11110000
        D <= "11110000";
        wait for 100 ns;

        -- Store 01010101
        D <= "01010101";
        wait for 100 ns;

        wait;

    end process;

end Behavioral;