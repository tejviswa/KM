/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 18-10-2024
* Program:  Write a program to swap two arrays in reverse order.
Example: 
Sample input :
array1 = {1,2,3,4,5};
array2 = {6,7,8,9,10};

Sample output:
array1 : {10,9,8,7,6}
array2: { 5,4,3,2,1}
* 
*
*
*/


#include<stdio.h>
int main()
{	
	int size,i,ret,j,a;                                                  //declaring inputs
	printf("Enter size of array\n");
	ret=scanf("%d",&size);                                             // reading inputs
	while(ret!=1)                                                     //error handling
	{
		printf("Enter size correctly\n");
		while(getchar()!='\n');                                     
		ret=scanf("%d",&size);                                         //reading inputs again
	}


	int arr1[size];                                                    //declaring array1
	int arr2[size];                                                      //decalring array 2
	printf("Enter array1 elements\n");
	for(i=0;i<size;i++) 
	{
		ret=scanf("%d",&arr1[i]);                                         //reading array 1 elements

 		while(ret!=1)                                                  //error handling
        {
            printf("Enter number correctly");
            while(getchar()!='\n');
            ret=scanf("%d",&arr1[i]);                                    //reading input again
        }
	}

	printf("Enter array2 elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr2[i]);                                     //reading array 2 elements

 		while(ret!=1)                                            //error handling
        {
            printf("Enter number correctly");
            while(getchar()!='\n');
            ret=scanf("%d",&arr2[i]);                                 //reading input again
        }
	}

	printf("Inputs:\n array1[%d]={",size);
	for(i=0;i<size;i++)
	{
		printf("%d,",arr1[i]);                                             //printing array 1
	}
	
	printf("\b");
	printf("}\n");
		
	printf(" array2[%d]={",size);                                               
	for(i=0;i<size;i++)
	{
		printf("%d,",arr2[i]);                                         //printing array 2
	}
	
	printf("\b");
	printf("}\n");


//===============swaping=================


	for(i=0,j=size-1;i<size,j>=0;i++,j--)
	{
		a=arr1[i];                                                        //swaping arrays 1 with 2 in reverse order
		arr1[i]=arr2[j];
		arr2[j]=a;
	}
	

//==========================================

	printf("Output:\n array1[%d]={",size);
	
	for(i=0;i<size;i++)
	{
		printf("%d,",arr1[i]);                                     //printing the swapped array 1
	}
	printf("\b");
	printf("}\n");

	
	printf(" array2[%d]={",size);
	
	for(i=0;i<size;i++)
	{
		printf("%d,",arr2[i]);                                    //printing the swapped array 2
	}
	printf("\b");
	printf("}\n");

	return 0;
}

