/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 22-10-2024
* Program: Write a program to print the address of a variable , its value ,its size, try different executions and note the address printed. Assign the address of the variable to a pointer variable.Print the size of pointer and its indirected value (apply * operator).
* Sample Input :25
* Sample output :
Address of variable :0x7ffd2ccf1cdc ,its value is :25, its size is :4
Size of pointer is  : 8
Value of pointer is : 7ffd2ccf1cdc

*
*/


#include<stdio.h>
int main()
{
	int x=25;                                         //declaing input variables
	int *p=&x;                                          //assigning address of variable to pointer
	printf("Address of variable :%p ,its value is :%d, its size is :%ld\n",&x,x,sizeof(x));
	printf("Size of pointer is  : %ld\n",sizeof(p));
	printf("Value of pointer is : %lx\n",p);

	return 0;
}

