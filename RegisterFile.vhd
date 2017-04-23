library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity RegisterFile is
    Port ( rs1 : in  STD_LOGIC_VECTOR (5 downto 0);
           rs2 : in  STD_LOGIC_VECTOR (5 downto 0);
           rd : in  STD_LOGIC_VECTOR (5 downto 0);
           datoEscribir : in  STD_LOGIC_VECTOR (31 downto 0);
           reset : in  STD_LOGIC;
           crs1 : out  STD_LOGIC_VECTOR (31 downto 0);
           crs2 : out  STD_LOGIC_VECTOR (31 downto 0));
end RegisterFile;

architecture Behavioral of RegisterFile is

type ram is array (0 to 39) of std_logic_vector (31 downto 0);
	signal registro : ram :=(others => x"00000000");

begin

process(reset,rs1,rs2,rd,datoEscribir)
	begin
	
			registro(0) <= x"00000000";
			if(reset = '1')then
				crs1 <= (others=>'0');
				crs2 <= (others=>'0');
				registro <= (others => x"00000000");
				
			else
				crs1 <= registro(conv_integer(rs1));
				crs2 <= registro(conv_integer(rs2));
				if(rd /= "000000")then  
					registro(conv_integer(rd)) <= datoEscribir;
				end if;
			end if;
			
	end process;

end Behavioral;

