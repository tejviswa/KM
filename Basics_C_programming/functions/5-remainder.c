/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 04-10-2024
* Program: Write a function that takes two numbers a and b and returns the remainder after dividing a with b. 
* Sample Input : 100 5
* Sample output : Enter two numbers 100 5
* 				Result is 0
* 				Enter numbers :5 0
				Denominator must not be 0,enter b value again: 6
				Remainder is 5
				Enter numbers :a
				ENter correct values:4 5
				Remainder is 4



*
*/


#include<stdio.h>


/*
 *  @brief  : This function is used to calculate remainder of given integers.
 *  @note   : This is obtained by using the modulus operator.
 *  @Param1 : int
 *	@Param2 : int
 *	@retval : int - modulus of a & b
 */


int modulus(int a,int b) 												 //modulus function
{
	int mod;
	mod=a%b;														//calculation of remainder
	return mod;                                                    //returning mod value
}

int main()  														 //main function
{
	int a,b,ret,mod;												//declaring inputs
	printf("Enter numbers :");
	ret=scanf("%d %d",&a,&b);										//reading inputs
	while(ret!=2)													//error handling
	{
		printf("ENter correct values:");
		getchar();
		ret=scanf("%d%d",&a,&b);
	}
	while(b==0)															//error handling
	{
		printf("Denominator must not be 0,enter b value again: ");  //printing error message 
		getchar();
		scanf("%d",&b);                                             //reading b value again
	}
	mod=modulus(a,b); 													//Function call
	printf("Remainder is %d\n",mod);

	return 0;
}

