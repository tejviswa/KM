/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 05-11-2024
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
int c_val=0;
int sum(int,int);
void error(void);

int main()
{
	int A1=20,A2=40;
	int i;
	for(i=0;i<10;i++)
	{
		if(A1>A2)
			A2=sum(A1,A2);
		else
			A1=sum(A1,A2);
	}
	error();
	printf("%d %d\n",A1,A2);
}

int sum(int a,int b)
{
	return a+b;
}

void error(void)
{
	int divide;
	int result;
	divide=c_val;
	result=10/divide;
	return;
}

