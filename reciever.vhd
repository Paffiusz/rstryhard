library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity reciever is
	port(
		clk_i : in std_logic;
		RXD_i : in std_logic;
		rs_data : out std_logic_vector(7 downto 0)
	);
end reciever;

architecture Behavioral of reciever is

begin


end Behavioral;

