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
	int (*ptr)(int,int);
	int n1,n2;
	char ch;
	printf("Enter two numbers\n");
	scanf("%d%d",&n1,&n2);
	printf("Enter operator\n");
	getchar();
	scanf("%c",&ch);

	switch(ch)
	{
		case '+':ptr=add;
				 printf("Add :%d\n",ptr(n1,n2));
				 break;

		case '-':ptr=sub;
				 printf("Sub :%d\n",ptr(n1,n2));
				 break;

		case '*':ptr=mul;
				 printf("mul :%d\n",ptr(n1,n2));
				 break;

		case '/':ptr=div;
				 printf("div :%d\n",ptr(n1,n2));
				 break;
	
		case '%':ptr=mod;
				 printf("mod :%d\n",ptr(n1,n2));
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




