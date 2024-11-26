/*
 *  Topic  :                               STM4C123 Arm-Cortex-M4 Toggle Led
 *  File   :                               Main.c        
*/

#define    SYSCTL_BASE                            0x400FE000
#define    GPIOF_BASE                             0x40025000 

#define    SYSCTL_RCGC2_OFFSET                    0x108
#define    GPIOF_PORTF_DATA_REG_OFFSET            0x3FC
#define    GPIOF_PORTF_DIR_REG_OFFSET             0x400 
#define    GPIOF_PORTF_DEN_REG_OFFSET             0x51C 


typedef volatile unsigned long int                vuint32_t; 

typedef union
{
	vuint32_t All_Bits; 
	struct{
		vuint32_t Reserved0t2: 3; 
		vuint32_t Bit3       : 1; 
	}Bits;
}URegister;
volatile URegister *SYSCTL_RCGC2=                 (volatile URegister*) (SYSCTL_BASE + SYSCTL_RCGC2_OFFSET); 
volatile URegister *GPIOF_Portf_Data=             (volatile URegister*) (GPIOF_BASE + GPIOF_PORTF_DATA_REG_OFFSET); 
volatile URegister *GPIOF_Portf_Direction=        (volatile URegister*) (GPIOF_BASE + GPIOF_PORTF_DIR_REG_OFFSET); 
volatile URegister *GPIOF_Portf_Denable=          (volatile URegister*) (GPIOF_BASE + GPIOF_PORTF_DEN_REG_OFFSET);


#define Enable_Gpiof_Portf                        SYSCTL_RCGC2->All_Bits= 0x00000020

#define Set_Gpiof_Portf_Bit3_Output               GPIOF_Portf_Direction->Bits.Bit3= 1
#define Enable_Gpiof_Portf_Bit3                   GPIOF_Portf_Denable->Bits.Bit3= 1


void Gpiof_Portf_Toggle_Bit3(void)
{
	GPIOF_Portf_Data->Bits.Bit3= 1; 
	
    GPIOF_Portf_Data->Bits.Bit3= 0;

    return; 	
}
    

int main(void) 
{
	Enable_Gpiof_Portf;
	
    Set_Gpiof_Portf_Bit3_Output; 	
	Enable_Gpiof_Portf_Bit3;
	
	while(1)
	{
		Gpiof_Portf_Toggle_Bit3();
	}
	
	return 0;
}      

 
                 

    