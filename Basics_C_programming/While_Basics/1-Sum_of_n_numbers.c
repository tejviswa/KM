/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 26-09-2024
* Program: Write a program to read n numbers from the keyboard and find their sum.
* Sample Input :5
* Sample output :Enter how many numbers you want to add: 5
* 				Enter numbers: 1 2 3 4 5 
* 				Sum is 15
* 				
*
*/


#include<stdio.h>
int main()
{
	int i=0,sum=0,n,a,ret;//declaring inputs
	printf("Enter how many numbers you want to add \n");
	ret=scanf("%d",&n);//reading inputs
	if(ret!=1)//error handling
	{
		printf("Invalid input\n");
		return 1;
	}
	if(n<0)//checking for negative nummbers
	{
		printf("Enter only positive number\n");
		return 1;
	}
	printf("Enter numbers\n");
	while(i<n)//loop until n
	{
		//printf("Enter numbers\n");
		ret=scanf("%d",&a);
		if(ret!=1)
		{
			
			printf("Invalid input\n Sum is %d\n",sum);
			return 1;
		}
		else 
		{
			sum+=a;
			i++;
		}
	}
	printf("Sum is %d\n",sum);
	return 0;
}

