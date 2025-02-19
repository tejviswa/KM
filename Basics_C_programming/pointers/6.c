/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 22-10-2024
* Program: declare different pointers with different data types. Print the sizes of the pointer variables using sizeof operator. Why do u think all of them are giving same size irrespective of the data type ?
* Sample Input :
* Sample output :
 size of int pointer : 8
size of char pointer: 8
size of float pointer: 8

*
*/


#include<stdio.h>
int main()
{
	int *p1;                                 //declaring pointer with int data type
	char *p2;                         //declarig pointer with char data type
	float *p3;                         //declaring pointer with float data type

	printf("size of int pointer : %ld\n",sizeof(p1));           //printing size of each pointer
	printf("size of char pointer: %ld\n",sizeof(p2));
	printf("size of float pointer: %ld\n",sizeof(p3));
	

	return 0;
}


/*Reason for the same size of pointer:
 *
All memory addresses are unsigned integers. So all kind of pointer variables, irrespective of their base data type, occupy same amount of memory. So size of all pointers is same on a specific system.
 *
 */


