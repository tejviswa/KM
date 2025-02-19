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
int main()
{
	int i,j,n,t,in;
	
	printf("Enter size of array\n");
	
	scanf("%d",&n);

	int arr[n];
	printf("Enter elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	//t=arr[0];
	in=0;
		
	int arr2[20]={0};
	
	//cloning to arr2
//	for(i=0;i<n;i++)
//	{
//		arr2[i]=arr[i];
//	}
	
	for(i=0;i<n;i++)
	{
		in=0;
		for(j=0;j<i+1;j++)
		{
			if(arr[i]==arr[j])
			{
				
				arr[j]=0;
			}
			if(arr[i]!=arr[j])
			{
				arr[j]=arr[j];
			}
		}
	}

	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}

				
	


		




	return 0;
}

