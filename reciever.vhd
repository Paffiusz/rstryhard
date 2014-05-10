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

signal c_clk: integer:=0;
signal rs_word : std_logic_vector(7 downto 0):=(others=>'0');
signal bit_count : integer:=0;

type state is (waiting,input,push);

shared variable q : state :=waiting;
constant N : integer := 5208;

begin

process(clk_i)
	begin
		if rising_edge(clk_i) then
			if q=waiting then
				c_clk<=0;
				if RXD_i = '0' then
					q:=push;
				end if;
				
			elsif q=push then
				c_clk<=c_clk+1;
				if c_clk = N/2 then
					q:=input;
					c_clk<=0;
				end if;
				
			elsif q=input then
				c_clk<= c_clk+1;
				if c_clk = N then
					if bit_count <=8 and bit_count>=0 then
						rs_word(bit_count)<=RXD_i;
						bit_count<=bit_count+1;
						c_clk<=0;
					elsif bit_count=9 then
						rs_data<=rs_word;
						q:=waiting;
						c_clk<=0;
						bit_count<=0;
					end if;
				end if;
				
			end if;
		end if;
	
end process;

end Behavioral;

