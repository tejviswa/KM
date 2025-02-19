/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 02-11-2024
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
int count(int x);
int main()
{
	int n,b;
	printf("Enter number\n");
	scanf("%x",&n);
	b=count(n);
	printf("Consecutive 1's in given number :%d\n",b);

	return 0;
}

int count(int x)
{
	int a[32];
	int c=0,y,k=0,i,s,b,big,l;
	for(i=0;i<31;i++)
	{
		y=x&(0x01<<i);
		printf("%d\n",y);

		if(y==1)
		{
			c++;
			b=c;
		}
	
		if(y==0)
		{
			a[k]=b;
			k++;
			c=0;
		}
	}
	s=sizeof(a);
	for(l=0;l<9;l++)
	{

	printf("%d ",a[i]);
	}
	big=a[0];
	for(i=1;i<31;i++)
	{
		if(big>a[i])
		{
			big=big;
		}
		else
			big=a[i];
	}
	return big;
}


		


