/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 17-01-2025
* Program:  WAP to print if  a character is alphanumeric or special character, using macro conditions.
* Sample Input :
* Sample output :
* Enter something
e3
It's Alphanumeric
Enter something
$
It's special character

*
*/


#include<stdio.h>

#define ALPHANUM(c)  ((c>=97 && c<=122) || (c>=65 && c<=90)) || (c>=48 && c<=57)
int main()
{
	char ch;
	printf("Enter something\n");
	scanf("%c",&ch);
	if(ALPHANUM(ch))
		printf("It's Alphanumeric\n");
	else
		printf("It's special character\n");

	return 0;
}

