library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity ALU is
    Port ( dato1Alu : in  STD_LOGIC_VECTOR (31 downto 0);
           dato2Alu : in  STD_LOGIC_VECTOR (31 downto 0);
           operacionAlu : in  STD_LOGIC_VECTOR (5 downto 0);
           salidaAlu : out  STD_LOGIC_VECTOR (31 downto 0);
			  carry : in  STD_LOGIC);
end ALU;

architecture Behavioral of ALU is

begin

process(dato1Alu,dato2Alu,operacionAlu)
	begin
	   case (operacionAlu) is 
			when "000000" => 
				salidaAlu <= dato1Alu + dato2Alu;
			when "111100" => ---SAVE
				salidaAlu <= dato1Alu + dato2Alu;
				
			when "111101" => --- REstore
				salidaAlu <= dato1Alu + dato2Alu;

				
			when "010000" => 
				salidaAlu <= dato1Alu + dato2Alu;
			when "000100" => 
				salidaAlu <= dato1Alu - dato2Alu;
			when "010100" => 
				salidaAlu <= dato1Alu - dato2Alu;
			when "000001" => 
				salidaAlu <= dato1Alu and dato2Alu;
			
			when "010001" => 
				salidaAlu <= dato1Alu and dato2Alu;
			when "000101" => 
				salidaAlu <= dato1Alu and not (dato2Alu);
				
			when "010101" => 
				salidaAlu <= dato1Alu and not (dato2Alu);
				
			when "000010" => 
				salidaAlu <= dato1Alu or dato2Alu;
				
			when "010010" => 
				salidaAlu <= dato1Alu or dato2Alu;
				
			when "000110" =>
				salidaAlu <= dato1Alu or not (dato2Alu);
				
			when "010110" =>
				salidaAlu <= dato1Alu or not (dato2Alu);
				
			when "000011" =>
				salidaAlu <= dato1Alu xor dato2Alu;
				
			when "010011" =>
				salidaAlu <= dato1Alu xor dato2Alu;
				
			when "000111" =>
				salidaAlu <= dato1Alu xnor dato2Alu;
				
			when "010111" =>
				salidaAlu <= dato1Alu xnor dato2Alu;
				
			when "001000" => -- addX
				salidaAlu <= dato1Alu + dato2Alu + carry;
			when "001100" => --subX
				salidaAlu <= dato1Alu - dato2Alu - carry;
			when "011000" => -- addXcc
				salidaAlu <= dato1Alu + dato2Alu + carry;
			when "011100" => --subXcc
				salidaAlu <= dato1Alu - dato2Alu - carry;
			
			when "100110" => -- SRL
				salidaAlu <= to_stdlogicvector(to_bitvector(dato1Alu) srl conv_integer(dato2Alu));
			when "100101" => --SLL
				salidaAlu <= to_stdlogicvector(to_bitvector(dato1Alu) sll conv_integer(dato2Alu)); 	
			
			when others => 
				salidaAlu <= (others=>'0');
		end case;
	end process;

end Behavioral;

