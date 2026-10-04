library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity flip_flop_tb is
end flip_flop_tb;

architecture Behavioral of flip_flop_tb is

    component flip_flop
        Port (
            D     : in  STD_LOGIC;
            CLK   : in  STD_LOGIC;
            RESET : in  STD_LOGIC;
            Q     : out STD_LOGIC
        );
    end component;

    signal D     : STD_LOGIC := '0';
    signal CLK   : STD_LOGIC := '0';
    signal RESET : STD_LOGIC := '0';
    signal Q     : STD_LOGIC;

begin

    uut: flip_flop
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
        D <= '0';
        wait for 100 ns;

        -- Store 1
        RESET <= '0';
        D <= '1';
        wait for 100 ns;

        -- Store 0
        D <= '0';
        wait for 100 ns;

        -- Store 1
        D <= '1';
        wait for 100 ns;

        wait;

    end process;

end Behavioral;