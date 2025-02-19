/*
* Name : Tejo prapulla
* Date : 16-09-2024
* Program:  Write a program that reads an integer and displays the right-most digit of the number.
* Sample Input : 123
* Sample output :3
*
*/

#include<stdio.h>

int main()
{
	int a; //declaring an integer
	printf("Enter an integer value: ");
	scanf("%d",&a);                      //read inputs from user
	printf("Right most digit is %d\n",a%10);// prints right most digit of given number
	return 0;
}
