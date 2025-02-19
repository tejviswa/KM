/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 04-10-2024
* Program: Write a function that takes two numbers a and b and returns the quotient after dividing a with b.
* Sample Input :5  2
* Sample output :Enter two numbers :5 2 
* 				Result is 2.50
* 				ENter two numbers
				r
				Enter correct values
				?
				Enter correct values
				54
				67
				Result is 0.81

*
*/


#include<stdio.h>


/*
 *  @brief  : This function is used to calculate quotient  of given integers.
 *  @note   : This is obtained by using the division operator.
 *  @Param1 : float
 *	@Param2 : float
 *	@retval : float - division of a & b
 */


float division(float a,float b)                                  													   //quotient function
{
	float div;
	div=a/b;                                                     													  //calculating quotient
	return div;                                               											      //returning div value
}

int main()                                                      											       //main function
{
	float a,b,ret,div,c;                                      														      //declaring inputs
	printf("ENter two numbers\n");
	ret=scanf("%f%f",&a,&b);                              										          //reading inputs
	
	while(ret!=2)                                        										         //error handling
	{
		printf("Enter correct values\n");
		getchar();
		ret=scanf("%f%f",&a,&b);
	}

	while(b==0)                                             	            //error handling checking if the given inputs are numbers or not.
	{ 
		printf("Denominator must not be 0, enter b value again\n");
		getchar();
		scanf("%f",&b);                                            							    //reading inputs again
			
	}

	div=division(a,b); 												//Function call
	printf("Result is %0.2f \n",div);                               //Printing result upto two decimal values.

	return 0;
}



