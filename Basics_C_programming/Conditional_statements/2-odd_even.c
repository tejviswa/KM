/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 19-09-2024
* Program: Read an integer input and print if given number is even or odd
* Sample Input :6
* Sample output :Enter a number : 6
* 6 is even number
*
*/


#include<stdio.h>
int main()
{
	int num,mod;//declaring inputs
	printf("Enter a number\n");
	scanf("%d",&num);//reading inputs
	if(mod%2==0)//checking condition
		printf("%d is even number\n",num);
	else
		printf("%d is odd number\n",num);
	return 0;
}

