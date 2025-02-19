/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 18-10-2024
* Program: Write a program to print an array in reverse order.

* Sample Input :
* Sample output :
Enter size of array
3
Enter array elements
4
5
7
Array of elements arr[3]={4,5,7}
Reverse order is arr[3]={7,5,4}

*
*/


#include<stdio.h>
int main()
{	
	int size,ret,i;																//decalring inputs
	printf("Enter size of array\n");                                       
	ret=scanf("%d",&size);													//reading size of array
	while(ret!=1)                                                       //error handling
	{
		printf("Enter size correctly\n");
		while(getchar()!='\n');
		ret=scanf("%d",&size);								        //reading size again
	}

	int arr[size];                                                   
	printf("Enter array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);                                     //reading array elements
		while(ret!=1)                                            //error handling
        {
            printf("Enter number correctly");
            while(getchar()!='\n');
            ret=scanf("%d",&arr[i]);                               //reading element again
        }



	}
	printf("Array of elements arr[%d]={",size);
	for(i=0;i<size;i++)
	{
		printf("%d,",arr[i]);                                          //printing array elements before reversing
	}
	printf("\b");
	printf("}\n");
		

	printf("Reverse order is arr[%d]={",size);
	for(i=size-1;i>=0;i--)
	{
		printf("%d,",arr[i]);                                             //prinitng array elements in reverse order
	}
	printf("\b");
	printf("}\n");

	return 0;
}

