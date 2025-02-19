/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 04-10-2024
* Program:Write afunction that takes two numbers a and b as input arguments and returns their product as return value without using * operator. 
* Sample Input :3 -4
* Sample output : Enter two numbers : 3 -4
* 			    Product is -12
* 			    Enter two numbers
				a
				Enter correct values
				?
				Enter correct values
				6
				0
				Product is 0

*
*/


#include<stdio.h>


/*
 *  @brief  : This function is used to find the Multiplaction of two integers and returns integer
 *  @note   : Multiplication is performing by repeated addition of the same number
 *  @Param1 : int
 *	@Param2 : int
 *	@retval : int - product of n1 & n2
 */

int product(int a,int b)
{
	int i,pro=0;                              //declaring inputs
	if(b>a)                                   //if num2 is greater than num1.
	{
		for(i=1;i<=b;i++)                     //repeating loop until multiplication is done
		{
			pro=pro+a;
		}
	}
	else
		for(i=b;i<0;i++)                     //if num1 is greater than num2
		{
			pro=pro-a;
		}
	return pro;                              //returning product value
}




int main()
{
	int a,b,ret,pro;                                 //declaring inputs
	                      

	printf("Enter number 1 : ");					//Prompt to the user to enter number 1
	while(scanf("%d",&n1) == 0)						//Condition for checking the user entered correct value or not
	{
		printf("Error! Enter Integer only\n");		//If user entered other than integer print Error message
		printf("Enter number 1 : ");
		getchar();									//To remove the character entered
	}
	printf("Enter number 2 : ");					//Prompt to the user to enter number 2
	while(scanf("%d",&n2) == 0)						//Checking user entered integer or not
	{
		printf("Error! Enter Integer only\n");		//Error message if user entered wrong input
		printf("Enter number 2 : ");
		getchar();
	}
	pro=product(a,b);                               //Function call
	printf("Product is %d \n",pro);
	return 0;
}

