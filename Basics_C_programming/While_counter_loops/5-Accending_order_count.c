/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 29-09-2024
* Program:Read n numbers in ascending order.If a number enterd is bigger than previous number,then count it.If it is smaller then dpn't count it,instead the loop repeat itself and read another number. 
* Sample Input :5
* Sample output :Enter n number:5
* 				Enter 5 numbers:
* 				3
* 				4
* 				2
* 				6
* 				8
* 				The count is 3
*
*/


#include<stdio.h>
int main()
{
	int i=1,c=0,n,n1,n2,a,ret;//declaring inputs
	printf("Enter number\n");
	ret=scanf("%d",&n);//reading inputs
	while(ret!=1)//error handling
	{
		printf("Enter number only\n");
		getchar();
		ret=scanf("%d",&n);
	}
	printf("Enter %d numbers\n",n);
	ret=scanf("%d",&n1);//reading number 1
	while(ret!=1)//error handling
	{
		printf("Enter numbers only\n");
		getchar();
		ret=scanf("%d",&n1);
	}
	a=n1;//moving the 1st number to variable a
	n--;//decrementing n value as 1st number id read already
	while(i<=n)//loop until all numbers are read
	{
		ret=scanf("%d",&n2);
		if(ret!=1)
			printf("enter numbers only");
		if(n2>a)//if read number is bigger than previous then only count increases
		{
			c++;//incrementing only if the number are in ascending order	
		}
		a=n2;//moving the read number to variable a for comparing next number in loop
		i++;
	}
	printf("The count is %d\n",c);//finally printing the count value

	return 0;
}

