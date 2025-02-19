/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 20-09-2024
* Program:Check if the given year is leap year or not 
* Sample Input :1999
* Sample output :Enter year: 1999
*				Not a leap year
*/


#include<stdio.h>
int main()
{
	int year,leap;//declaring inputs
	printf("Enter year\n");
	scanf("%d",&year);//reading inputs
	leap=year%100==0?year%400==0?1:0:year%4==0?1:0;//checking condition
	leap==1?printf("Leap year\n"):printf("Not a leap year\n");//checking condition
	return 0;
}

