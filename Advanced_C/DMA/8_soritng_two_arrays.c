/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 16-12-2024
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
int main()
{
	int i,j,n,m,s;
	int a1[10],a2[10];

	printf("Enter n and m values\n");
	scanf("%d%d",&n,&m);

	printf("Enter %d values of array1 ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a1[i]);
	}

	printf("Enter %d values of array2 ",m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a2[i]);
	}
	
	for(i=n,j=0;j<m;i++,j++)
	{
		a1[i]=a2[j];
	}

	for(i=0;i<n+m;i++)
	{
		for(j=0;j<n+m;j++)
		{
			if(a1[i]>a2[j])
			{
				s=a2[j];
				a2[j]=a1[i];
				a1[i]=s;
			}
		}
	}

	for(i=0;i<n+m;i++)
	{
		printf("%d ",a1[i]);
	}

	return 0;
}

