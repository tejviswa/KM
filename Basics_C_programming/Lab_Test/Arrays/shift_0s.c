/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 19-10-2024
* Program: shifting 0's to last
* Sample output :
Enter size of array
8
Enter elements of array
1
2
0
0
0
3
5
4
Input arr[]={ 1,2,0,0,0,3,5,4}
Output arr[]={1,2,3,5,4,0,0,0}

*
*/


#include<stdio.h>
int main()
{
	int i,j,n;                                   //declaring inputs
	printf("Enter size of array\n");
	scanf("%d",&n);                          //reading inputs
	int arr1[n];                              //decalring array
	int arr2[20]={0};                          //declaring temp array2 

	printf("Enter elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);           //reading elemenys of an array
	}
	j=0;

	for(i=0;i<n;i++)
	{
		if(arr1[i]!=0)             //if the array 1 not equal to 0 thenonly moving the element to array2
		{
			arr2[j]=arr1[i];   //array 2 contains all the elements of non 0's of array 1
			j++;
		}
	}

	printf("Input arr[]={ ");
	for(i=0;i<n;i++)
	{
		printf("%d,",arr1[i]);         //printig input array
	}

	printf("\b}\n");


	printf("Output arr[]={");
	for(i=0;i<n;i++)
	{
		printf("%d,",arr2[i]);        //printing array 2
	}
	printf("\b}\n");

	return 0;
}

