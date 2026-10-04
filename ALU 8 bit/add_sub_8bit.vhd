library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity add_sub_8bit is
    Port (
        A    : in  STD_LOGIC_VECTOR(7 downto 0);
        B    : in  STD_LOGIC_VECTOR(7 downto 0);
        SUB  : in  STD_LOGIC;
        Y    : out STD_LOGIC_VECTOR(7 downto 0);
        Cout : out STD_LOGIC
    );
end add_sub_8bit;

architecture Structural of add_sub_8bit is

    component full_adder_8bit
        Port (
            A    : in  STD_LOGIC_VECTOR(7 downto 0);
            B    : in  STD_LOGIC_VECTOR(7 downto 0);
            Cin  : in  STD_LOGIC;
            Sum  : out STD_LOGIC_VECTOR(7 downto 0);
            Cout : out STD_LOGIC
        );
    end component;

    component xor_gate
        Port (
            A : in STD_LOGIC;
            B : in STD_LOGIC;
            Y : out STD_LOGIC
        );
    end component;

    signal B_modified : STD_LOGIC_VECTOR(7 downto 0);
    signal Result     : STD_LOGIC_VECTOR(7 downto 0);

begin

    -- If SUB = 0:
    -- B_modified = B
    --
    -- If SUB = 1:
    -- B_modified = NOT B

    XOR0: xor_gate
        port map (
            A => B(0),
            B => SUB,
            Y => B_modified(0)
        );

    XOR1: xor_gate
        port map (
            A => B(1),
            B => SUB,
            Y => B_modified(1)
        );

    XOR2: xor_gate
        port map (
            A => B(2),
            B => SUB,
            Y => B_modified(2)
        );

    XOR3: xor_gate
        port map (
            A => B(3),
            B => SUB,
            Y => B_modified(3)
        );

    XOR4: xor_gate
        port map (
            A => B(4),
            B => SUB,
            Y => B_modified(4)
        );

    XOR5: xor_gate
        port map (
            A => B(5),
            B => SUB,
            Y => B_modified(5)
        );

    XOR6: xor_gate
        port map (
            A => B(6),
            B => SUB,
            Y => B_modified(6)
        );

    XOR7: xor_gate
        port map (
            A => B(7),
            B => SUB,
            Y => B_modified(7)
        );

    ADDER: full_adder_8bit
        port map (
            A    => A,
            B    => B_modified,
            Cin  => SUB,
            Sum  => Result,
            Cout => Cout
        );

    Y <= Result;

end Structural;