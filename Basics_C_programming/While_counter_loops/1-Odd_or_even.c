/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 27-09-2024
* Program: Read n number of numbers from user(n value taken as input) and print it each number is even or odd.
* Sample Input :2 5
* Sample output :Enter n number: 2
* 				 Enter x value 1:5
* 				 The given number 5 is odd
* 				 Enter x value 2:4
* 				 The given number 4 is Even
*
*/


#include<stdio.h>
int main()
{
	int i=1,ret,x,n;//declaring inputs
	printf("How many numbers you want to check\n");
	ret=scanf("%d",&n);//reading inputs
	while(ret!=1)//error handling
	{
		printf("Invalid input enter number again\n");
		getchar();
		ret=scanf("%d",&n);
	}
		
	while(i<=n)//loop until reading n numbers
	{
		
		printf("Enter x value %d:\n",i);
		ret=scanf("%d",&x);

		if(ret!=1)//error handling
		{	
			printf("Invalid inputs\n");
			getchar();
		}
		else
		{
			if(x%2==0)//checking for the number is even or odd
				printf("%d is Even\n",x);
			else
				printf("%d is Odd\n",x);
			i++;
		}
	}


	return 0;
}

