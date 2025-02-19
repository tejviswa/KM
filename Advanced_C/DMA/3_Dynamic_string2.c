/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 13-12-2024
* Program:Create a string dynamically,read and print its value.
* Sample Input :
* Sample output :
Enter string
viswandhuni tejo prapulla
pointer value:viswandhuni tejo pra
heap addr:0x561399913260
Memory dellocated 
*
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *p1,*p2;                  //declaring two pointer
	int n1,n2;
	printf("Enter size of string1& string2\n");
	scanf("%d%d",&n1,&n2);

	p1 = (char *)malloc(n1*sizeof(int));  
	if(p1==NULL)
	{
	printf("Memory not available\n");
	exit(1);
	}

	strcpy(p1,"Kernal");

	p2 = (char *)malloc(n1*sizeof(int));  
	if(p2==NULL)
	{
	printf("Memory not available\n");
	exit(1);
	}

	strcpy(p2,p1);


	printf("Dynamic string 1 value:%s\nheap addr:%p\n\n",p1,p1);
	printf("Dynamic string 2 value:%s\nheap addr:%p\n\n",p2,p2);
	
	free(p1);
	free(p2);
	
	p1=NULL;
	if(p1==NULL)
	{
		printf("p1 Memory dellocated \n");
	}
	p2=NULL;
	if(p2==NULL)
	{
		printf(" p2 Memory dellocated \n");
	}
	return 0;
}

