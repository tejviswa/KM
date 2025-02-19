/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 29-09-2024
* Program:Read n numbers from the user, and while reading every number, print if the number is bigger or smaller than the previous number. For the first number, there won't be any output as it is the first one.
* Sample Input :
* Sample output :Enter n number: 3
* 				5
* 				6
* 				given number is bigger than previous
* 				2
* 				given number is smaller than previous
*
*
*/


#include<stdio.h>
int main()
{
	int i=1,ret,n,n1,n2,a;//declaring inputs
	printf("Enter n number\n");
	ret=scanf("%d",&n);//reading inputs
	while(ret!=1)//error handling
	{
		printf("Enter numbers only\n");
		getchar();
		ret=scanf("%d",&n);
	}
	printf("Enter numbers\n");
	ret=scanf("%d",&n1);//reading 1st number
	while(ret!=1)//error handling
	{
		printf("Enter numbers only\n");
		getchar();
		ret=scanf("%d",&n1);
	}
	a=n1;//moving 1st read number to variable a
	n--;//decrementing n value as already 1st number read
	while(i<=n)//loop until n number
	{
		ret=scanf("%d",&n2);//reading number 2
		while(ret!=1)//error handling
		{
			printf("Enter numbers only\n");
			getchar();
			ret=scanf("%d",&n2);
		}
		 if(n2>a)//if the number  is bigger than the previous  
			printf("given number is bigger than previous\n");
		else if(n2<a)//if the number  is smaller than previous
			printf("given number is smaller than previous\n");
		else
			printf("Both are equal\n");
		a=n2;//moving the read number to variable a for comparing with next number in the loop
		i++;
	}

	return 0;
}

