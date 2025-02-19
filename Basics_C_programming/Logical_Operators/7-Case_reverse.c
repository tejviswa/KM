/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 21-09-2024
* Program: Input a alphabet output is case reverse
* Sample Input :T
* Sample output :Enter an alphabet: T
* 				 t
*
*/


#include<stdio.h>
int main()
{
	char ch;//declaring inputs
	printf("Enter a character\n");
	scanf("%c",&ch);//reading inputs
	if(ch>=65 && ch<=90)//checking condition
		printf("%c\n",ch+32);
	else if(ch>=97 && ch<=122)//checking condition
		printf("%c\n",ch-32);
	else 
		printf("Not an alphabet\n");
	return 0;
}

