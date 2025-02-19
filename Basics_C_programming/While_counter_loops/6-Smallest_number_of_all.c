/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 29-09-2024
* Program: Read n numbers from the user and print the smallestnumber of all. 
* Sample Input :5
* Sample output :Enter n number:5
* 				Enter 5 numbers:
* 				3
* 				4
* 				2
* 				6
* 				8
* 				The smallest number is 2
*
*/


#include<stdio.h>
int main()
{
	int i=1,n,n1,n2,a,s,ret;//declaring inputs
	printf("Enter n number\n");
	ret=scanf("%d",&n);//reading n number
	while(ret!=1)//eror handling
	{
		printf("Enter numbers only");
		getchar();
		ret=scanf("%d",&n);
	}
	printf("Enter %d numbers\n",n);
	getchar();
	ret=scanf("%d",&n1);
	while(ret!=1)//error handling
	{
		printf("Enter number only\n");
		getchar();
		ret=scanf("%d",&n1);
	}
	a=n1;//moving the 1st number to variable a for comparing later in loop
	n--;//decrementing n value as already 1st number is scanned
	while(i<=n)//loop untill all numbers are read
	{
		ret=scanf("%d",&n2);
		if(ret!=1)
			printf("Enter number only\n");
		if(n2<s)//comparing number with previous and if true the smallest number is stored in s and a
		{
			
			s=n2;//storing in a for comparing with next number
		}
		
		i++;
	}
	printf("The smallest number is %d\n",s);//finally the value of s is printed at last

	return 0;
}

