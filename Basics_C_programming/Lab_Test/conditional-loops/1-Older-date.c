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
	int d1,m1,y1,d2,m2,y2;
	printf("Enter two dates\n");
	scanf("%d-%d-%d",&d1,&m1,&y1);
	scanf("%d-%d-%d",&d2,&m2,&y2);
	for(;y1<y2;)
	{
		printf("%d-%d-%d\n",d1,m1,y1);
		break;
	}
	for(;y1==y2;)
	{
		for(;m1<m2;)
		{
			for(;d1<d2;)
			{
				printf("%d-%d-%d\n",d1,m1,y1);
				break;
			}
			for(;d1>d2;)
			{
				printf("%d-%d-%d\n",d1,m1,y1);
				break;
			}
			for(;d1==d2;)
			{
				printf("%d-%d-%d\n",d1,m1,y1);
				break;
			}
			break;
		}
		for(;m1==m2;)
		{
			for(;d1<d2;)
			{
				printf("%d-%d-%d\n",d1,m1,y1);
				break;
			}
			for(;d1>d2;)
			{
				printf("%d-%d-%d\n",d2,m2,y2);
				break;
			}
			for(;d1==d2;)
			{
				printf("%d-%d-%d\n",d1,m1,y1);
				break;
			}

			break;
		}
		for(;m1>m2;)
		{
			printf("%d-%d-%d\n",d2,m2,y2);
			break;
		}
		break;
	}
	for(;y1>y2;)
	{
		printf("%d-%d-%d\n",d2,m2,y2);
		break;
	}
	
	return 0;
}

