/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 13-12-2024
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
#include<stdlib.h>
#if 0 
int main()
{
	int *p;
	p=(int*)malloc(4);
	printf("heap:%p\n",p);
	printf("pointer:%p\n",&p);
	*p=5;
	printf("%d\n",*p);

	return 0;
}

#endif



#if 0
int main()
{
	int *p;
	p=(int*)malloc(10*sizeof(int));
	printf("heap   :%p\n",p);
	printf("pointer:%p\n",&p);
	int i;
	for(i=0;i<10;i++)
	{
		p[i]=i;
		printf("%d\n",p[i]);
	}
	return 0;
}

#endif






#if 1
int main()
{
	int *p;
	int n,i;

	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	printf("heap   :%p\n",p);
	printf("pointer:%p\n",&p);
	
	for(i=0;i<n;i++)
	{
		p[i]=i*10;
		printf("%d\n",p[i]);
	}
	return 0;
}

#endif


