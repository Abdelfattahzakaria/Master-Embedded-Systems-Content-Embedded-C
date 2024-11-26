/*

 *                                  Typedef Command

 */

#include <stdio.h>


typedef unsigned short int                 uint16_t;


//**********************************************************************
//**********************************************************************
struct SPerson
{
	uint16_t weiht;
};
typedef struct SPerson SPerson_t;


//**********************************************************************
//**********************************************************************
typedef struct
{
	uint16_t weight;
}SPerson2_t;


//**********************************************************************
//**********************************************************************
typedef unsigned char                                     uint8_t;
typedef signed char                                       sint8_t;
typedef unsigned short int                                uint16_t;
typedef signed short int                                  sint16_t;
typedef unsigned long int                                 uint32_t;
typedef signed long int                                   sint32_t;
typedef unsigned long long int                            uint64_t;
typedef signed long long int                              sint64_t;
typedef float                                             float32_t;
typedef double                                            double64_t;
typedef long double                                       double96_t;


int main(void)
{
	uint16_t x= 30;
	printf("x: %hu\n" , x);


	//**********************************************************************
	//**********************************************************************
	SPerson_t person_obj= {50};
	printf("person's weight: %hu\n" , person_obj.weiht);


	//**********************************************************************
	//**********************************************************************
	SPerson2_t person_obj2= {60};
	printf("person's weight: %hu\n" , person_obj2.weight);


	//**********************************************************************
	//**********************************************************************
	uint8_t ch= 'a';
	printf("ch= %c\n" , ch);

	uint8_t y= 15;
	printf("y= %d\n" , y);

	uint16_t z= 50;
	printf("z= %hu\n" , z);


	uint32_t w= 70;
	printf("w= %u\n" , w);

	uint64_t q= 170;
	printf("q= %llu\n" , q);

	float32_t r= 160.879;
	printf("r= %f\n" , r);

	double64_t p= 7689.4654;
	printf("p= %lf\n" , p);



	//**********************************************************************
	//**********************************************************************
	volatile uint8_t g= 6;
	printf("g= %d\n" , g);


	uint8_t volatile a= 8;
	printf("a= %d\n" , a);


	volatile uint8_t *ptr_g= &g;
	printf("g= %d\n" , *ptr_g);


	uint8_t volatile *ptr_g_= &g;
	printf("g= %d\n" , *ptr_g_);


	uint8_t * volatile ptr_a= &a;
	printf("g= %d\n" , *ptr_a);


	volatile uint8_t * volatile ptr_a_= &a;
	printf("g= %d\n" , *ptr_a_);


	return 0;
}

