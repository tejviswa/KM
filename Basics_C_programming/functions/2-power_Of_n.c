/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 04-10-2024
* Program: Write a function that takes two numbers a and n as inputs and returns the value of a to the power of n.
* Sample Input :3 4
* Sample output :Enter base and exponent value: 3 4
* 				The power of 3 to the power of 4 is 81
* 				Enter base and exponent value : 2 -2
				Enter correct values check if the exponent is positive or not
2				 87
 				2 to the power of 87 is 154742504910672534362390528
				Enter base and exponent value : -2 4
				 -2 to the power of 4 is 16.00
				 Enter base and exponent value : -2 5
 				-2 to the power of 5 is -32.00




*
*/


#include<stdio.h>


/*
 *  @brief  : This function is used to find the power of two integers and returns integer
 *  @note   : Repeated multiplication of the number 
 *  @Param1 : int
 *	@Param2 : int
 *	@retval : int - power of n1 & n2
 */

int power(int a,int n)                                         //Function header for power
{
	int i, p=1;                                                   //declaring inputs
	
	while(n)
	
//	for(i=1;i<=n;i++)                                               //loop for calculating power
	{
		p=p*a;
		n--;
	}
	return p;                                                         //returning p value
}

int main()
{
	int a,n,ret,p;                                                     //declarig inputs
	printf("Enter base  value : ");
	ret=scanf("%d",&a);
	while(ret!=1)                                                   //error handling
	{
		printf("Enter numbers only\n");
		getchar();
		ret=scanf("%d",&a);                                         //reading inputs again
	}

	printf("Enter exponent value : ");                           
	ret=scanf("%d",&n);     
	while(ret!=1||n<0)                                                 //error handling
	{
		printf("Enter correct values check if the exponent is positive or not \n");
		getchar();
		ret=scanf("%d",&n);                                         //reading inputs again
	}


	p=power(a,n);                                                    //power subroutine()
	printf(" %d to the power of %d is %d \n",a,n,p);
	return 0;
}

