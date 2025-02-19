#include<stdio.h>
#include"header.h"
extern int a1,a2;
extern float a,b;
/*
 *  @brief  : This function is used to add two given integers.
 *  @note   : Performing addition jsut using + operator.
 *  @Param1 : float
 *	@Param2 : float
 *	@retval : float - addition of a and b values
 */

extern float a,b;
extern int a1,a2;

float add()
{
	                    //performing addition
	return a+b;
}

/*
 *  @brief  : This function is used to subtract two given integers.
 *  @note   : Performing addition just using - operator.
 *  @Param1 : float
 *	@Param2 : float
 *	@retval : float - subtraction of a and b values
 */


float sub()
{
	                        //performing subtraction
	return a-b;
}


/*
 *  @brief  : This function is used to multiply two given integers.
 *  @note   : Performing addition just using * operator.
 *  @Param1 : float
 *	@Param2 : float
 *	@retval : float - multiplication of a and b values
 */




float mul(void)
{
	                     //performing multiplication
	return a*b;
}

/*
 *  @brief  : This function is used to divide two given integers and give result as quotient.
 *  @note   : Performing division just using / operator.
 *  @Param1 : float
 *	@Param2 : float
 *	@retval : float - division of a and b values
 */



float div(void)
{
	while(b==0)                           //checking if the denominator value is 0 or not.
	{
		printf("Denominator must not be 0,Enter value again\n");
		while(getchar() != '\n');
		scanf("%f",&b);                     //reading b value again
	}
	                                //performing division
	return a/b;
}


/*
 *  @brief  : This function is used to divide two given integers give result as remainder.
 *  @note   : Performing
 *  division just using % operator.
 *  @Param1 : int
 *	@Param2 : int
 *	@retval : int - division of a and b values
 */


int mod()
{
//	printf(" Enter number 1 again:");
//	scanf("%d",&a1);
//	printf("Enter number 2: ");
//	scanf("%d",&a2);
	
	while(a2==0)                       //checking the denominator value is 0 or not.
	{
		printf("Denominator must not be 0,Enter value again\n");
		getchar();
		scanf("%d",&a2);               //readig b value again
	}
	
	return a1%a2;
}
