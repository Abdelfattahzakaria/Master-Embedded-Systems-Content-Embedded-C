/*
 * Topic :                                   Native Startup File For stm32f103c6     
*/  


typedef          unsigned long int               uint32_t;
typedef          int                             sint32_t;  
typedef          unsigned char                   uint8_t;  


static uint32_t const _STACK_TOP_SP_[256]; 
    
extern sint32_t main(void); 
extern uint32_t _E_TEXT_; 
extern uint32_t _S_DATA_; 
extern uint32_t _E_DATA_; 
extern uint32_t _S_BSS_; 
extern uint32_t _E_BSS_; 
 



void Rest_Handler(void)
{
	// Copy .data info from rom  ------->> ram 
	uint32_t dot_data_size= (uint8_t *) &_E_DATA_ - (uint8_t *) &_S_DATA_;  
	uint8_t *Ptr_src= (uint8_t *) &_E_TEXT_; 
	uint8_t *Ptr_dest= (uint8_t *) &_S_DATA_; 
	uint32_t i; 
	for(i= 0; i < dot_data_size; i++) 
		*((uint8_t *) Ptr_dest++)= *((uint8_t *) Ptr_src++);     
	
	// Init .bss into ram 
	uint32_t dot_bss_size= (uint8_t *) &_E_BSS_ - (uint8_t *) &_S_BSS_; 
	Ptr_dest= (uint8_t *) &_S_BSS_; 
	for(i= 0; i < dot_bss_size; i++) 
		*((uint8_t *) Ptr_dest++)= (uint8_t) 0;   
	
	// Jump Label: jump to main function
	
	main(); 

    return;	
}     

void Default_Handler(void)
{
	Rest_Handler(); 

    return;	
}  
void NMI_Handler(void) __attribute__((weak , alias("Default_Handler"))); ;
void H_Fault_Handler(void) __attribute__((weak , alias("Default_Handler"))); ;
void MM_Fault_Handler(void) __attribute__((weak , alias("Default_Handler"))); ;
void Bus_Handler(void) __attribute__((weak , alias("Default_Handler"))); ;
void Usage_Fault_Handler(void) __attribute__((weak , alias("Default_Handler"))); ; 

void (* const Ptr_Vectors_Func[])(void) __attribute__((section(".vectors"))) = {
	(void (*) (void))((uint32_t) _STACK_TOP_SP_ + sizeof(_STACK_TOP_SP_)),         
	&Rest_Handler,
	&NMI_Handler,
	&H_Fault_Handler,
	&MM_Fault_Handler,
	&Bus_Handler,
	&Usage_Fault_Handler,
};
      

    
                
	        
	                     
					  