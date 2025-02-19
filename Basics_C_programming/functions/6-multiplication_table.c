/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 04-10-2024
* Program: Write a function that takes an integer number as input prints its multiplication table.return type is void.
* Sample Input : 5
* Sample output :
Enter number: 5
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50

*/


#include<stdio.h>


/*
 *  @brief  : This function is used to print the multiplication table  of given number.
 *  @note   : Table printing is done by using just printf()
 *  @Param1 : int
 *	@retval : no ret value for void
 */


void mul(int n,int i)                                     //table function
{
	for(i=1;i<=10;i++)                                  //loop for printing table
	{
	printf("%d * %d = %d\n",n,i,i*n);                   //printing table upto 10 multiples

	}
}


int main()                                                 //main function
{
	int n,ret,i;                                         //declaring inputs
	printf("Enter number\n");
	ret=scanf("%d",&n);                                  //reading inputs
	while(ret!=1)                                        //error handling if the given input is interger or not
	{
		printf("Enter numbers only\n");                     //printing error message 
		getchar();
		ret=scanf("%d",&n);                                //reading input again
	}
	mul(n,i);                                          //Function call

	return 0;
}
	

		




