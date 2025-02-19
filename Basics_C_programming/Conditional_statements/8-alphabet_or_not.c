/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 19-09-2024
* Program: Read character and print if it is alphabet or not
* Sample Input :t
* Sample output :Enter a character: t
* It's an alphabet
* 
*
*/


#include<stdio.h>
int main()
{
	char ch;//declaring input character
	printf("Enter a character: ");
	scanf("%c",&ch);//reading input character
	if(ch>=65)//checking condition
	{
		if(ch<=90)//checking condition
		{
			printf("It's an alphabet\n");
		}
		else if(ch>=97)//checking condition
		{
			if(ch<=122)//checking condition
			{
				printf("It's an alphabet\n");
			}
			else
			{
				printf("It's not alphabet\n");
			}
		}
		else
		{
			printf("It's not an alphabet\n");
		}
	}
	else
	{
		printf("It's not an alphabet\n");
	}
	return 0;
}

