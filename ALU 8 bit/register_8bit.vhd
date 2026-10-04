library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity register_8bit is
    Port (
        D     : in  STD_LOGIC_VECTOR(7 downto 0);
        CLK   : in  STD_LOGIC;
        RESET : in  STD_LOGIC;
        Q     : out STD_LOGIC_VECTOR(7 downto 0)
    );
end register_8bit;

architecture Structural of register_8bit is

    component register_1bit
        Port (
            D     : in  STD_LOGIC;
            CLK   : in  STD_LOGIC;
            RESET : in  STD_LOGIC;
            Q     : out STD_LOGIC
        );
    end component;

begin

    REG0: register_1bit
        port map (
            D     => D(0),
            CLK   => CLK,
            RESET => RESET,
            Q     => Q(0)
        );

    REG1: register_1bit
        port map (
            D     => D(1),
            CLK   => CLK,
            RESET => RESET,
            Q     => Q(1)
        );

    REG2: register_1bit
        port map (
            D     => D(2),
            CLK   => CLK,
            RESET => RESET,
            Q     => Q(2)
        );

    REG3: register_1bit
        port map (
            D     => D(3),
            CLK   => CLK,
            RESET => RESET,
            Q     => Q(3)
        );

    REG4: register_1bit
        port map (
            D     => D(4),
            CLK   => CLK,
            RESET => RESET,
            Q     => Q(4)
        );

    REG5: register_1bit
        port map (
            D     => D(5),
            CLK   => CLK,
            RESET => RESET,
            Q     => Q(5)
        );

    REG6: register_1bit
        port map (
            D     => D(6),
            CLK   => CLK,
            RESET => RESET,
            Q     => Q(6)
        );

    REG7: register_1bit
        port map (
            D     => D(7),
            CLK   => CLK,
            RESET => RESET,
            Q     => Q(7)
        );

end Structural;