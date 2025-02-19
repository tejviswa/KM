/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 17-01-2025
* Program: Write down a macro to find out the biggest of two numbers.
MAX(x,y) should define code to find biggest of x and y. Implement array sorting function using this macro (Bubble sort)
* Sample Input :
* Sample output :
Enter elements of array
2
4
5
7
1
1 2 4 5 7

*
*/


#include<stdio.h>

#define MAX(x,y) (x)<(y)
int main()
{
	int i,j,temp,x,y,arr[5];
	printf("Enter elements of array\n");
	for(i=0;i<5;i++)
	{
	scanf("%d",&arr[i]);
	}

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			x=arr[i];
			y=arr[j];
			if(MAX(x,y))
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("Output:\n");
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}

