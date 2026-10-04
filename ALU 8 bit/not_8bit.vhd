library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity not_8bit is
    Port (
        A : in  STD_LOGIC_VECTOR(7 downto 0);
        Y : out STD_LOGIC_VECTOR(7 downto 0)
    );
end not_8bit;

architecture Structural of not_8bit is

    component not_gate
        Port (
            A : in STD_LOGIC;
            Y : out STD_LOGIC
        );
    end component;

begin

    NOT0: not_gate
        port map (A => A(0), Y => Y(0));

    NOT1: not_gate
        port map (A => A(1), Y => Y(1));

    NOT2: not_gate
        port map (A => A(2), Y => Y(2));

    NOT3: not_gate
        port map (A => A(3), Y => Y(3));

    NOT4: not_gate
        port map (A => A(4), Y => Y(4));

    NOT5: not_gate
        port map (A => A(5), Y => Y(5));

    NOT6: not_gate
        port map (A => A(6), Y => Y(6));

    NOT7: not_gate
        port map (A => A(7), Y => Y(7));

end Structural;