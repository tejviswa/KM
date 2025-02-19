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

void invokeptr(int (*fptr)(int,int),int x,int y);
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int mod(int,int);

int main()
{
	int n1,n2;
	char ch;
	int (*fptr)(int,int);
	printf("Enter two numbers\n");
	scanf("%d%d",&n1,&n2);
	printf("Enter operator\n");
	getchar();
	scanf("%c",&ch);

	switch(ch)
	{
		case '+':invokeptr(add,n1,n2);

				 break;

		case '-':invokeptr(sub,n1,n2);

				 break;

		case '*':invokeptr(mul,n1,n2);

				 break;

		case '/':invokeptr(div,n1,n2);

				 break;
	
		case '%':invokeptr(mod,n1,n2);
				 
				 break;
	}

	return 0;
}

void invokeptr(int (*fptr)(int,int),int x,int y)
{
	printf("%d\n",fptr(x,y));
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




