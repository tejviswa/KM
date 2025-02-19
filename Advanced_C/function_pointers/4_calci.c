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
	int (*fptr[])(int,int)={add,sub,mul,div,mod};
	printf("Enter two numbers\n");
	scanf("%d%d",&n1,&n2);
	printf("Enter operator\n");
	getchar();
	scanf("%c",&ch);
	invokeptr(fptr,n1,n2,ch);

	return 0;
}

void invokeptr(int (*fptr[])(int,int),int n1,int n2,char ch)
{
    switch(ch)
    {
        case '+':
                 printf("Add :%d\n",fptr[0](n1,n2));
                 break;

        case '-':
                 printf("Sub :%d\n",fptr[1](n1,n2));
                 break;

        case '*':
                 printf("mul :%d\n",fptr[2](n1,n2));
                 break;

        case '/':
                 printf("div :%d\n",fptr[3](n1,n2));
                 break;

        case '%':
                 printf("mod :%d\n",fptr[4](n1,n2));
                 break;
    }

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




