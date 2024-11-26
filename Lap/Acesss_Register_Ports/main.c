/*

 *                                  Access Register Ports

 */


#include <stdio.h>
#include <stdint.h>


typedef        volatile uint32_t                              vuint32_t;


#define        MY_REGISTER                                    *(vuint32_t *)(0x30610000)


typedef union
{
	vuint32_t All_Ports;
	struct
	{
		vuint32_t Port_A: 8;
		vuint32_t Port_B: 8;
		vuint32_t Port_C: 8;
        vuint32_t Port_D: 8;
	}SSIU_Ports_Obj;
}USIU_Register_DT;


int main(void)
{
   vuint32_t *ptr_register= (vuint32_t *) 0x30610000;
   *ptr_register= 0xffffffff;


   //*****************************************************************************
   //*****************************************************************************
   *((vuint32_t *)(0x30610000))= 0xffffffff;


   //*****************************************************************************
   //*****************************************************************************
   MY_REGISTER= 0xffffffff;


   //*****************************************************************************
   //*****************************************************************************
   volatile USIU_Register_DT *ptr_siu_register= (volatile USIU_Register_DT *)(0x30610000);

   ptr_siu_register->All_Ports= 0xffffffff;

   ptr_siu_register->SSIU_Ports_Obj.Port_A= 0xff;

	return 0;
}


