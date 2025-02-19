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

int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int mod(int,int);

int main()
{
	int (*ptr[])(int,int)={add,sub,mul,div,mod};
	int n1,n2;
	char ch;
	printf("Enter two numbers\n");
	scanf("%d%d",&n1,&n2);
	printf("Enter operator\n");
	getchar();
	scanf("%c",&ch);

	switch(ch)
	{
		case '+':
				 printf("Add :%d\n",ptr[0](n1,n2));
				 break;

		case '-':
				 printf("Sub :%d\n",ptr[1](n1,n2));
				 break;

		case '*':
				 printf("mul :%d\n",ptr[2](n1,n2));
				 break;

		case '/':
				 printf("div :%d\n",ptr[3](n1,n2));
				 break;
	
		case '%':
				 printf("mod :%d\n",ptr[4](n1,n2));
				 break;
	}

	return 0;
}

int add(int a,int b)
{
	return a+b;
}


int sub(int a,int b)
{
	return a-b;
}


int mul(int a,int b)
{
	return a*b;
}


int div(int a,int b)
{
	return a/b;
}


int mod(int a,int b)
{
	return a%b;
}




