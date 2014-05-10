<<<<<<< HEAD
LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;

ENTITY Receiver IS
	PORT(
		clk_i : in STD_LOGIC;
		RxD : in STD_LOGIC;
		Data : out STD_LOGIC_VECTOR(7 downto 0);
		Data_Ready : out STD_LOGIC;
		LOG : inout STD_LOGIC:= '0'
		);
END Receiver;

ARCHITECTURE Behavioral OF Receiver IS

COMPONENT synchronizer IS
	PORT(
		clk_i : IN STD_LOGIC;
		sig_i : IN STD_LOGIC;
		sync_sig_o : OUT STD_LOGIC
		);
END COMPONENT;

COMPONENT filter IS
	PORT(
		clk_i : IN STD_LOGIC;
		button : IN STD_LOGIC;
		Output : OUT STD_LOGIC:= '0'
		);
END COMPONENT;

--------------------------------------------------

constant clock_freq : integer := 50_000_000;	--in Hz
constant rs232_freq : integer := 9_600;		--in Hz

signal sync_RxD : STD_LOGIC:= '0';
signal snf_RxD : STD_LOGIC:= '0';
signal msg : STD_LOGIC_VECTOR(9 downto 0):=(others=>'0');
type state is (Waiting, Reciving, Recived);

BEGIN

	syn_rxd : synchronizer
		PORT MAP(clk_i => clk_i, sig_i => RxD, sync_sig_o => sync_RxD);
	
	ftr_rxd : filter
		PORT MAP(clk_i => clk_i, button => sync_RxD, Output => snf_RxD);
		
		
	process(clk_i)
	
	variable counter : integer range 0 to 2*clock_freq/rs232_freq:= 0;
	variable bit_counter : integer range 0 to 10:= 0;
	variable unit_state : state:= Waiting;
	
	begin
		if rising_edge(clk_i) then
		
		-- Obsluga stanu recivera
			if unit_state /= Reciving and snf_RxD = '0' then
				unit_state:= Reciving;
				counter:= 0;
				bit_counter:= 0;
				Data_Ready <= '0';
			elsif unit_state = Recived then
				Data <= msg(8 downto 1);
				Data_Ready <= '1';
			end if;					
		
		--Odbieranie wiadomosci

		if unit_state = Reciving then
			if counter = 2*(clock_freq/rs232_freq) then
				msg <= snf_RxD & msg(9 downto 1);
				counter := 0;
				bit_counter := bit_counter + 1;
				LOG <= NOT LOG;
			elsif( counter /= 2*(clock_freq/rs232_freq)) then
				counter := counter + 1;
			end if;
			
			if bit_counter = 10 then
				unit_state:= Recived;
			end if;
		end if;
			
		end if;
	end process;
	
END Behavioral;
=======
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
signal bit_count : integer range 0 to 9 :=0;

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

>>>>>>> 024b59ce8b3d8ad52c6f16f222d79cc99ae5582c
