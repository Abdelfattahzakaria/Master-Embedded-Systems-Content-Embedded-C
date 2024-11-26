/*
  
  * Topic  :                                     Simple_ARM_URT
  * File   :                                     __URT_C__
  * Author :                                 abdelfattahzakariaelbadry@gmail.com    
  
*/ 


#include "urt.h"     


typedef      volatile unsigned int                           vuint32_t;    
typedef union
{
	vuint32_t All_Pins; 
	// struct {....} Pin; 
} URegister; 
volatile URegister *const URT0DR= (vuint32_t *const)(0x101f1000);  


void Urt_Serial_Transfer_String(vuint8_t *Ptr_String)
{
	while(*Ptr_String != '\0')
		URT0DR->All_Pins = (vuint32_t)*Ptr_String++; 
	
	return; 
} 
	                  