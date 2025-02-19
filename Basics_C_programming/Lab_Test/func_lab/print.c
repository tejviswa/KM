/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 07-10-2024
* Program: 
* Sample Input :
* Sample output :
*
*/


#include"dates.h"

void PrintSubscript(int d)
{
	switch(d)
	{
		case 1:
		case 21:printf("%dst",d);break;
		case 2:
		case 22:printf("%dnd",d);break;
		case 3:
		case 23:printf("%drd",d);break;
		default:printf("%dth",d);break;
	}
}
void PrintMonthName(int m)
{
	switch(m)
	{
		case 1:printf("January");break;
		case 2:printf("February");break;
		case 3:printf("March");break;
		case 4:printf("April");break;
		case 5:printf("May");break;
		case 6:printf("June");break;
		case 7:printf("July");break;
		case 8:printf("August");break;
		case 9:printf("September");break;
		case 10:printf("October");break;
		case 11:printf("November");break;
		case 12:printf("December");break;
	}
}


void PrintDateinFormat(int d,int m,int y)
{
	
	printf("The candidate born on ");
	PrintSubscript(d);printf(" ");PrintMonthName(m);printf("-%d",y);
	printf(" is elder of all\n");


}

