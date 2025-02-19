#include<stdio.h>
#include"header.h"
extern int a1,a2;
extern float a,b;
/*
 *  @brief  : This function is used to add two given integers.
 *  @note   : Performing addition jsut using + operator.
 *	@retval : no return value
 */


int extern r1;
float extern r2;
extern float a,b;
extern int a1,a2;

void add()
{
	r2=a+b;
	                    //performing addition
}

/*
 *  @brief  : This function is used to subtract two given integers.
 *  @note   : Performing addition just using - operator.
 
 *	@retval : no return value
 */


void sub()
{
	r2=a-b;
	                        //performing subtraction
}


/*
 *  @brief  : This function is used to multiply two given integers.
 *  @note   : Performing addition just using * operator.
 *  
 *	@retval : no return value

 */




void  mul(void)
{
	r2=a*b;
	                     //performing multiplication
}

/*
 *  @brief  : This function is used to divide two given integers and give result as quotient.
 *  @note   : Performing division just using / operator.
 * 
 *	@retval : no return value
 */



void div(void)
{
	while(b==0)                           //checking if the denominator value is 0 or not.
	{
		printf("Denominator must not be 0,Enter value again\n");
		while(getchar() != '\n');
		scanf("%f",&b);                     //reading b value again
	}
	                                //performing division
	r2=a/b;
}


/*
 *  @brief  : This function is used to divide two given integers give result as remainder.
 *  @note   : Performing *  division just using % operator.
 *	@retval : no return value
 */


void mod()
{ 
	
	while(a2==0)                       //checking the denominator value is 0 or not.
	{
		printf("Denominator must not be 0,Enter value again\n");
		getchar();
		scanf("%d",&a2);               //readig a2 value again
	}

	
	r2=a1%a2;                 //performing modulus
}





