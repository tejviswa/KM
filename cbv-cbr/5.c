/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 24-10-2024
* Program: "Write a function that communicates with main using a single static variable without taking any input arguments.
Everytime function returns something using the static variable,after using it, main sends another input using the same variable and calls the function again.

* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
int *fun();
int main()
{
	int a[5];                                 //declaring array of size 5
	int i;
	int *p=a;                                  //assigning the base address of an array to pointer

	for(i=0;i<5;i++)
	{
		
		p=fun();                           //function call

	
		a[i]=*p;                            //storing the return values in the array
		
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);                     //printing the array
	}


	return 0;
}



/*
 *  @brief  : This function is used to print the square of natural numbers 
 *  @note   : declaring a static variables and squaring it
 *  @Param1 : no parameters
 *  @Param2 : no parameters
 *  @retval : no return value.
 */


int *fun()
{
	static int y;
	static int x;
	
	x++;
	y=x;
	if(x!=0)
	{
		y=y*y;
		printf("%d ",y);
	}
	
		
	return &y;                         //returning address of variable y
}

		






