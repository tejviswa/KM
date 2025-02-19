/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 19-10-2024
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
int rotate(int arr1[],int d,int n);

int main()
{
	int i,n,d;

	printf("Enter size of array\n");
	scanf("%d",&n);
	int arr1[n];

	printf("Enter elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter  rotate value\n");
	scanf("%d",&d);

	rotate(arr1,d,n);

	return 0;
}


int rotate(int arr1[],int d,int n)
{
	int k,j,t;
	int arr2[10]={0};

	t=n;

	for(k=0;k<d;k++)
	{
		t=t-1;
		arr2[t]=arr1[k];
	}

	j=d;
	for(k=0;k<n-d;k++)
	{
		arr2[k]=arr1[j];
		j++;
	}

	for(k=0;k<n;k++)
	{
		printf("%d ",arr2[k]);
	}
	printf("\n");

}












