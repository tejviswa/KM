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
int isLeapYear2(int y2)
{
	int l;
	if(y2%100==0&&y2%400==0||y2%4==0)
		l=1;
	return l;
}
	


int IsValidDate2(int d2,int m2,int y2,int ret)
{
	int l,v;
	if(ret!=3)
		v=0;
	else if(y2<0)
		v=0;
	else if(m2==2)
	{
		l=isLeapYear2(y2);
		if(l==1)
		{
			if(d2&&d2<=29)
				v=1;
			else
				v=0;
		}
		else
		{
			if(d2>0&&d2<=28)
				v=1;
			else 
				v=0;
		}
	}
	else if(m2==4||m2==6||m2==9||m2==11)

		{
			if(d2>0&&d2<=30)
				v=1;
			else
				v=0;
		}
	else
	{
		if(d2>0&&d2<=31)
			v=1;
		else
			v=0;
	}
	return v;
}



