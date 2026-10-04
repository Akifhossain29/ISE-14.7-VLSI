library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity mux_6to1_8bit is
    Port (
        AND_IN : in  STD_LOGIC_VECTOR(7 downto 0);
        OR_IN  : in  STD_LOGIC_VECTOR(7 downto 0);
        XOR_IN : in  STD_LOGIC_VECTOR(7 downto 0);
        NOT_IN : in  STD_LOGIC_VECTOR(7 downto 0);
        ADD_IN : in  STD_LOGIC_VECTOR(7 downto 0);
        SUB_IN : in  STD_LOGIC_VECTOR(7 downto 0);

        SEL    : in  STD_LOGIC_VECTOR(2 downto 0);

        Y      : out STD_LOGIC_VECTOR(7 downto 0)
    );
end mux_6to1_8bit;

architecture Behavioral of mux_6to1_8bit is
begin

    process(AND_IN, OR_IN, XOR_IN, NOT_IN, ADD_IN, SUB_IN, SEL)
    begin

        case SEL is

            when "000" =>
                Y <= AND_IN;

            when "001" =>
                Y <= OR_IN;

            when "010" =>
                Y <= XOR_IN;

            when "011" =>
                Y <= NOT_IN;

            when "100" =>
                Y <= ADD_IN;

            when "101" =>
                Y <= SUB_IN;

            when others =>
                Y <= "00000000";

        end case;

    end process;

end Behavioral;