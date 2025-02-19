/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 13-12-2024
* Program: 
* Sample Input :
* Sample output :
*
 How many elements you want to enter
5
Enter the elements
4
3
5
1
7
Sorted array:1 3 4 5 7
Memory deallocated

*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p;
	int n,i,j,s;
	printf("How many elements you want to enter\n");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("Memory not available");
		exit(1);
	}
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(p[i]<p[j])
			{
				s=p[j];
				p[j]=p[i];
				p[i]=s;
			}
		}
	}
	printf("Sorted array:");
	for(i=0;i<n;i++)
	{
		printf("%d ",p[i]);
	}

	free(p);
	p=NULL;
	if(p==NULL)
		printf("\nMemory deallocated\n");

	return 0;
}

