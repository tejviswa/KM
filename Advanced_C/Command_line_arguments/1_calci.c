/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 23-01-2025
* Program:   Implement the calculator program using Command line arguments

eg., input:  >./calc   56 + 671
output : 727
* Sample Input :
* Sample output :
*./a.out 45 + 78
123

*/


#include<stdio.h>

int atoi(char str[])
{
	int i=0,res=0;

	while(str[i])
	{
		str[i]=str[i]-'0';
		res=(res*10)+str[i];
		i++;
	}
	return res;	
}


int main(int argc,char* argv[])
{
	int a,b;
	a=atoi(argv[1]);
	b=atoi(argv[3]);
		

	switch(argv[2][0])
	{
		case '+':printf("%d\n",a+b);
				 break;
		case '-':printf("%d\n",a-b);
				 break;
		case '*':printf("%d\n",a*b);
				 break;
		case '/':
				 if(b>0)         //b must not be 0
					 printf("%d\n",a/b);
				 else
					 printf("denominator must not be 0\n");
				 break;

		case '%':
				 if(b>0)         //b must not be 0
					 printf("%d\n",a%b);
				 else
					 printf("denominator must not be 0\n");
				 break;
		default:printf("Invalid operator\n");

	}

	return 0;
}

