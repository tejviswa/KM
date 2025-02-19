/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 25-09-2024
* Program: Program to check whether a character is vowel or not
* Sample Input :E
* Sample output :Enter a character: E
* 				Vowel
*
*/


#include<stdio.h>
int main()
{
	char ch;							//declaring inputs
	printf("Enter a character\n");
	scanf(" %c",&ch);					//reading inputs
	
	switch(ch)
	{
		case 'a':						//checking conditions of all the vowels
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':printf("Vowel\n");  //if the input character is any of above character then its a vowel
				 break;
		default:printf("Not a vowel\n");
	}



	return 0;
}

