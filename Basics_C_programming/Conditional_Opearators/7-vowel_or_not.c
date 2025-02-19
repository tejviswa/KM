/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 20-09-2024
* Program:check if a character is vowel or not 
* Sample Input :Q
* Sample output :Enter a character:Q
*				Not a Vowel
*/


#include<stdio.h>
int main()
{
	char ch;//declaring inputs
	printf("Enter a character: ");
	scanf(" %c",&ch);//reading inputs
	ch=ch=='a'?printf("Vowel\n"):ch=='e'?printf("Vowel\n"):ch=='i'?printf("Vowel\n"):ch=='o'?printf("Vowel\n"):ch=='u'?printf("Vowel\n"):ch=='A'?printf("Vowel\n"):ch=='E'?printf("Vowel\n"):ch=='I'?printf("Vowel\n"):ch=='O'?printf("Vowel\n"):ch=='U'?printf("Vowel\n"):printf("Not a vowel\n");
	return 0;
}

