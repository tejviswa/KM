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
int main()
{
	char *p;
	int n;
	printf("Enter size of string\n");
	p = (char *)malloc(n*sizeof(int));  

	if(p==NULL)
	{
	printf("Memory not available\n");
	exit(1);
	}
	printf("Enter string\n");
	scanf("%20[^\n]s",p);
	printf("pointer value:%s\nheap addr:%p\n",p,p);
	
	free(p);
	p=NULL;
	if(p==NULL)
	{
		printf("Memory dellocated \n");
	}
	return 0;
}

