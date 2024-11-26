/*
 * Topic :                                   Native Linker Script File For stm32f103c6     
*/  
MEMORY
{
	flash (RX): ORIGIN = 0x08000000 , LENGTH = 128K
	sram (RWX): ORIGIN = 0x20000000 , LENGTH = 20K
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
		. = ALIGN(4) ;
		. = . + 0X1000 ; 
		_STACK_TOP_SP_ = . ;    
	}> sram
}

         

                 