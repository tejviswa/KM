/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 13-12-2024
* Program:Create an integer dynamically,read and print its value.
* Sample Input :
* Sample output :
Enter number:8
pointer value:8
heap addr:0x5573d2cf3260

*
*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;          
	p = (int *)malloc(sizeof(int));  

	if(p==NULL)
	{
	printf("Memory not available\n");
	exit(1);
	}
	printf("Enter number:");
	scanf("%d",p);
	printf("pointer value:%d\nheap addr:%p\n",*p,p);
	
	free(p);
	p=NULL;
	if(p==NULL)
	{
		printf("Memory dellocated \n");
	}
	return 0;
}

