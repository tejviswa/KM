/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 20-09-2024
* Program: Print if the given number is even or odd
* Sample Input :8
* Sample output :Enter a number:8
*				It's even
*/


#include<stdio.h>
int main()
{
	int num;//declaring inputs
	printf("Enter a number:");
	scanf("%d",&num);//reading inputs
	num%2==0?printf("It's Even\n"):printf("It's Odd\n");
	return 0;
}

