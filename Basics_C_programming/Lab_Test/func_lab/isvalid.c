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
#include<stdio.h>
int isLeapYear1(int y1)
{
	int l;
	if(y1%100==0&&y1%400==0||y1%4==0)
		l=1;
	return l;
}
	


int IsValidDate(int d1,int m1,int y1,int ret)
{
	int v,l;
	if(ret!=3)
		v=0;
	else if(y1<0)
		v=0;

	else if(m1==2)// feb 
	{
		l=isLeapYear1(y1);
		if(l==1)
		{
			if(d1>0&&d1<=29)
				v=1;
			else
				v=0;
		}
		else
		{
			if(d1>0&&d1<=28)
				v=1;
			else 
				v=0;
		}
	}
	else if(m1==4||m1==6||m1==9||m1==11)

		{
			if(d1>0&&d1<=30)
				v=1;
			else
				v=0;
		}
	else
	{
		if(d1>0&&d1<=31)
			v=1;
		else
			v=0;
	}
	return v;
}


	



	




