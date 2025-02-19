/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 22-10-2024
* Program: Declare an integer array of size 10 and initialize it to some values. Print the addresses of each element of the array using a pointer. using indirection operator , print the value stored in each element of the array.
* Sample Input :
* Sample output :
Pointer value is 7 address is    : 0x7ffe451ae738
Address of element with index 0  : 7ffe451ae740
Pointer value is 3 address is    : 0x7ffe451ae738
Address of element with index 1  : 7ffe451ae744
Pointer value is 8 address is    : 0x7ffe451ae738
Address of element with index 2  : 7ffe451ae748
Pointer value is 2 address is    : 0x7ffe451ae738
Address of element with index 3  : 7ffe451ae74c
Pointer value is 1 address is    : 0x7ffe451ae738
Address of element with index 4  : 7ffe451ae750
Pointer value is 6 address is    : 0x7ffe451ae738
Address of element with index 5  : 7ffe451ae754
Pointer value is 3 address is    : 0x7ffe451ae738
Address of element with index 6  : 7ffe451ae758
Pointer value is 6 address is    : 0x7ffe451ae738
Address of element with index 7  : 7ffe451ae75c
Pointer value is 4 address is    : 0x7ffe451ae738
Address of element with index 8  : 7ffe451ae760
Pointer value is 9 address is    : 0x7ffe451ae738
Address of element with index 9  : 7ffe451ae764

*
*/


#include<stdio.h>
int main()
{
	int i;                                  //declaring input variables
	int x[10]={7,3,8,2,1,6,3,6,4,9};             //declaring array of size 10
	int *p1=x;                                   //declaring pointer and assigning the address of first element of array
	
	for(i=0;i<10;i++)
	{
		printf("Pointer value is %d address is    : %p\n",*p1,&p1);
		printf("Address of element with index %d  : %lx\n",i,p1);                 //printing the value of pointer for all elements of array
		p1++;
	}

	return 0;
}

