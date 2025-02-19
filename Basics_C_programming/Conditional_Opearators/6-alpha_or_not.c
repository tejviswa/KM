/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 20-09-2024
* Program:check if a character is Alphabet or not 
* Sample Input :G
* Sample output :Enter character:G
*				It's an alphabet
*/


#include<stdio.h>
int main()
{
	char ch;//declaring inputs
	printf("Enter character:");
	scanf(" %c",&ch);//reading inputs
	ch>='A'?ch<='Z'?printf("It's alphabet\n"):ch>='a'?ch<='z'?printf("It's alphabet\n"):printf("Not an alphabet\n"):printf("Not an alphabet\n"):printf("Not an alphabet\n");//checking condition
	return 0;
}

