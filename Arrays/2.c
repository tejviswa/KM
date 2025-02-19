/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 17-10-2024
* Program: Declare a character array without size.
Initialize the array with characters of your name.
Print your name using for loop.
*
* Sample output :Tejo prapulla
*
*/


#include<stdio.h>
int main()
{
	int i;                                                                 //decalring variable for loop
	int ar[]={'T','e','j','o',' ','p','r','a','p','u','l','l','a'};           //giving elements to the array
	for(i=0;i<13;i++)
		printf("%c",ar[i]);                                         //printing the elements
		
	printf("\n");

	return 0;
}

