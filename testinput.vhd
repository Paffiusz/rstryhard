LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY testinput IS
END testinput;
 
ARCHITECTURE behavior OF testinput IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT reciever
    PORT(
         clk_i : IN  std_logic;
         RXD_i : IN  std_logic;
         rs_data : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk_i : std_logic := '0';
   signal RXD_i : std_logic := '1';

 	--Outputs
   signal rs_data : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_i_period : time := 20 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: reciever PORT MAP (
          clk_i => clk_i,
          RXD_i => RXD_i,
          rs_data => rs_data
        );

   -- Clock process definitions
   clk_i_process :process
   begin
		clk_i <= '0';
		wait for clk_i_period/2;
		clk_i <= '1';
		wait for clk_i_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
    wait for 500 us;	
		RXD_i <= not RXD_i;
		wait for 208.4 us;
		RXD_i <= not RXD_i;
		wait for 312.6 us;
		RXD_i<= not RXD_i;
		wait for 312.6 us;
		RXD_i <= not RXD_i;
		wait for 521 us; 
		RXD_i <= not RXD_i;
		wait for 104.2 us;
		RXD_i <= not RXD_i;
		wait for 312.6 us;
		RXD_i <= not RXD_i;
		wait for 104.2 us;
		RXD_i <= not RXD_i;
		wait for 208.4 us;
		RXD_i <= not RXD_i;
		wait for 208.4 us;
		RXD_i <= not RXD_i;

      wait;
   end process;

END;
