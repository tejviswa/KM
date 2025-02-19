/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 19-09-2024
* Program: Take an integer input and print its magnitude
* Sample Input :-85
* Sample output :Enter number: -85
* 85
*
*/


#include<stdio.h>
int main()
{
	int num;//declaring inputs
	printf("Enter number\n");
	scanf("%d",&num);//reading inputs
	if(num>0)//checking condition
		printf("%d\n",num);
	else
	{
		num=num*-1;//seperating magnitude
		printf("%d\n",num);
	}

	return 0;
}

