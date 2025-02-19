/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 19-09-2024
* Program: Read character and check if its a digit or not
* Sample Input :8
* Sample output :Enter a character: 8
* It's a digit
*
*/


#include<stdio.h>
int main()
{
	char ch;//declaring a character
	printf("Enter a character: ");
	scanf("%c",&ch);//reading a character
	if(ch>=48)//if the input is >=48 ASCII or not
	{
		if(ch<=57)//if the input is <=57 ASCII or not
		{

			printf("It's a digit\n");
		}

		else
		{
			printf("Its'a not a digit\n");
		}
	}
	
else
	printf("It's not a digit\n");

	return 0;
}

