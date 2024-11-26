/*
  
  * Topic  :                                     Simple_ARM_URT
  * File   :                                     __APP_C__
  * Author :                                 abdelfattahzakariaelbadry@gmail.com
  
*/ 


#include "urt.h"    


vuint8_t *Ptr_Fixed_String= "Learn-In-Depth-Abdelfattah-abdelfattahzakariaelbadry.gmail.com"; 


int main(void)
{
	
	Urt_Serial_Transfer_String(Ptr_Fixed_String); 
	
	 
	return 0; 
	
}         
                      