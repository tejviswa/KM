/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 18-10-2024
* Program: Write a program to reverse an array and print it (Reverse the array by swapping both edges of the array and move inside and repeat till middle of the array):  


* Sample Input : array1 ={1,2,3,4,5};
* Sample output : array1 = {5,4,3,2,1};
*
*/


#include<stdio.h>
int main()
{	
	int size,ret,i,j,a;                                             //decalring inputs                                
	printf("Enter size of array\n");
	ret=scanf("%d",&size);										//reading size of array
	while(ret!=1) 												//error handling
	{
		printf("Enter size correctly\n");
		while(getchar()!='\n');
		ret=scanf("%d",&size);                               //reading size again
	}
	int arr[size];                                      //declaring array with size
	printf("Enter array elements\n");
	for(i=0;i<size;i++)
	{
		ret=scanf("%d",&arr[i]);                          //reading array elements
		while(ret!=1)                                    //error handling
        {
            printf("Enter number correctly");            
            while(getchar()!='\n');                                
            ret=scanf("%d",&arr[i]);                         //reading input again
        }

	}

	printf("INPUT array1[%d]={",size);
	for(i=0;i<size;i++)
	{
		printf("%d,",arr[i]);                                    //printing array before swapping
	}
	
	printf("\b");
	printf("}\n");

//=================swapping array====================

	for(i=0,j=size-1;i<j;i++,j--)
	{
		a=arr[i];
		arr[i]=arr[j];
		arr[j]=a;
	}
	
	printf("Output array1[%d]={",size);
	
	for(i=0;i<size;i++)
	{
		printf("%d,",arr[i]);                                            //printing swapped array
	}
	printf("\b");
	printf("}\n");

	return 0;
}

