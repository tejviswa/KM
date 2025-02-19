/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 03-10-2024
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
int main()
{
	int d,m,y,d1,m1,y1,n,b=1,i;
	printf("Enter number of students\n");
	scanf("%d",&n);
	printf("Enter Dob of student %d: ",b);
	scanf("%d-%d-%d",&d,&m,&y);
	for(i=1;i<n;i++)
	{
		b++;
		printf("Enter Dob of student %d: ",b);
		scanf("%d-%d-%d",&d1,&m1,&y1);
		if(y1>y)
		{
			d=d1;m=m1;y=y1;
		}
		else 
		{
			if(y1==y && m1>m)
			{
				m=m1;d=d1;y=y1;
			}
			else if(y1==y && m1==m && d1>d)
			{
				d=d1;m=m1;y=y1;
			}
			else if(y1==y &&m1==m && d1<d)
			{
				d=d;m=m;y=y;
				break;
			}
				
		}
	}
	printf("The youngest student is %d-%d-%d\n",d,m,y);

	return 0;
}

