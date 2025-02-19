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
int main()
{
	int d,m,y,d1,m1,y1,d2,m2,y2,ret,j=1,old,v,n;
	printf("Enter number of students :");
	ret=scanf("%d",&n);
	while(ret!=1)
	{
		printf("enter integer only\n");
		getchar();
		ret=scanf("%d",&n);
	}
	printf("Enter date of birth of candidate#%d: ",j);
	ret=scanf("%d-%d-%d",&d1,&m1,&y1);
	v=IsValidDate(d1,m1,y1,ret);
	
	if(v!=1)
	{
		while(v!=1)
		{

			printf("Enter date of birth of candidate#%d: ",j);
			getchar();
			ret=scanf("%d-%d-%d",&d1,&m1,&y1);
			v=IsValidDate(d1,m1,y1,ret);
		}
	}


	else
	{
		for(j=2;j<=n;j++)
		{

			printf("Enter date of birth of candidate#%d: ",j);
			getchar();
			ret=scanf("%d-%d-%d",&d2,&m2,&y2);
			v=IsValidDate2(d2,m2,y2,ret);
			while(v!=1)
			{

				printf("Enter corectly:");
				getchar();
				ret=scanf("%d-%d-%d",&d2,&m2,&y2);
				v=IsValidDate2(d2,m2,y2,ret);
			}
			old=DateCompare(d1,m1,y1,d2,m2,y2);
			switch(old)
			{
				case 1:d1=d1;m1=m1;y1=y1;break;
				case 0:d1=d2;m1=m2;y1=y2;break;
			}
		}
	}
	PrintDateinFormat(d1,m1,y1);

	return 0;
}



