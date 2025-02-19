/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 16-12-2024
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
int main()
{
	int x=5,y=0;
	int add(int,int);
	int (*p)(int,int)=add;


//	printf("%d\n",add(x,y));
	printf("%d\n",p(x,y));
	
	return 0;
}

int add(int a,int b)
{
	return a+b;
}
