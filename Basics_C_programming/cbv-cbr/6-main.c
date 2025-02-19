/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 25-10-2024
* Program: Write two source files, main.c and swap.c. The main function initializes a two-element array of ints, and then calls the swap function to swap the pair.

* Sample Input :
* Sample output :
Before swap a=4,b=5
After  swap a=5,b=4

*
*/


#include<stdio.h>
void swap(int a[]);
int main()
{
	int a[2]={4,5};                      //declaring array of two elements

	printf("Before swap a=%d,b=%d\n",a[0],a[1]);
	swap(a);                                        //function call swap
	printf("After  swap a=%d,b=%d\n",a[0],a[1]);

	return 0;
}

