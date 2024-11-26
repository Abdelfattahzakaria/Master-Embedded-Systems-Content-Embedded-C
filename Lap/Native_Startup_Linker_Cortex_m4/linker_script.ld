/*
 * Topic :                                   Native Linker Script File For TM4C123     
*/  
MEMORY
{
	flash (RX): ORIGIN = 0x00000000 , LENGTH = 512M
	sram (RWX): ORIGIN = 0x20000000 , LENGTH = 512M
}      

SECTIONS
{
	.text : 
	{
		*(.vectors*) 
		*(.text*) 
		*(.rodata)  
		_E_TEXT_ = . ;
	}> flash
	
	
	.data : 
	{
		_S_DATA_ = . ; 
		*(.data)  
		_E_DATA_ = . ; 
	}> sram AT> flash 
	
	
	.bss : 
	{
		_S_BSS_ = . ; 
		*(.bss) 
		. = ALIGN(4) ; 
		_E_BSS_ = . ;  
	}> sram
}

         
    
                 