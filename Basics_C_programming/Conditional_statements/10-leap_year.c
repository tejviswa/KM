/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 19-09-2024
* Program: Check if the given year is leap year or not
* Sample Input :2012
* Sample output :Enter year : 2012
* It's a leap year
*
*/


#include<stdio.h>
int main()
{
	int year;//declaring year
	printf("Enter year: ");
	scanf("%d",&year);//reading inputs
	if(year%100==0)//condition checking if remainder is 0 or not
	{
		if(year%400==0)//condition checking if remainder is 0 or not
		{
			printf("It's a leap year\n");
		}
		else
			printf("It's not a leap year\n");
	}
	else if(year%4==0)//condition checking if remainder is 0 or not
		printf("It's a leap year\n");
	else
		printf("It's not a leap year\n");

	return 0;
}

