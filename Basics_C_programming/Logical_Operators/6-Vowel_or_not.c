/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 21-09-2024
* Program:Read a character and print if it is alphabet or not
* Sample Input :T
* Sample output :Enter a character: T
* 				Not a vowel
*
*/


#include<stdio.h>
int main()
{
	char ch,a;//declaring inputs
	printf("Enter a character\n");
	scanf("%c",&ch);//reading inputs
	a=ch>=97?ch<=122?ch-32:ch:ch;//checking condition and assigning character to variable a
	if(a=='A'|| a=='E'|| a=='I'|| a=='O'|| a=='U')//checking conditon
		printf("It's a Vowel\n");
	else 
		printf("It's not a Vowel\n");
	return 0;
}

