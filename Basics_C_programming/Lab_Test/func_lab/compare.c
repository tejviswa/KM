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
int DateCompare(int d1,int m1,int y1,int d2,int m2,int y2)
{
	int old;
	if(y1<y2)
		old=1;// return 
	else
		old=0;
	
	
	if(y1==y2)
	{
		if(m1==m2)
		{
			if(d1==d2)
				old=2;
			else if(d1<d2)
				old=1;
			else
				old=0;
		}
		else if(m1<m2)
			old=1;
		else
			old=0;
	}
	return old;
}

