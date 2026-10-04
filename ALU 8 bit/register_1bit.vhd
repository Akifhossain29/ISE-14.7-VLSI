library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity register_1bit is
    Port (
        D     : in  STD_LOGIC;
        CLK   : in  STD_LOGIC;
        RESET : in  STD_LOGIC;
        Q     : out STD_LOGIC
    );
end register_1bit;

architecture Structural of register_1bit is

    component flip_flop
        Port (
            D     : in  STD_LOGIC;
            CLK   : in  STD_LOGIC;
            RESET : in  STD_LOGIC;
            Q     : out STD_LOGIC
        );
    end component;

begin

    FF0: flip_flop
        port map (
            D     => D,
            CLK   => CLK,
            RESET => RESET,
            Q     => Q
        );

end Structural;