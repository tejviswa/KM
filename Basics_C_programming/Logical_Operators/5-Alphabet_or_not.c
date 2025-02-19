/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 21-09-2024
* Program: Read a character and print if it's a alphabet or not
* Sample Input :A
* Sample output :Enter a character:A
* It's an alphabet
*
*/


#include<stdio.h>
int main()
{
	char ch;//declaring inputs
	printf("Enter a character\n");
	scanf(" %c",&ch);//reading inputs
	if(ch>=65 && ch<=90 ||ch>=97 && ch<=122)//checking condition
		printf("It's an alphabet\n");
	else 
		printf("It's not an alphabet\n");
	return 0;
}

