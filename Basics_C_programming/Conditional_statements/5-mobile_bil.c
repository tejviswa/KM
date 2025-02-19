/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 19-09-2024
* Program:To read no.of calls and compute the final bill 
* Sample Input :150
* Sample output :Enter no.of calls:150
* 312.50
*
*
*/


#include<stdio.h>
int main()
{
	int calls;//declaring inputs
	float bill;//declaring outputs
	printf("Enter no.of calls\n");
	scanf("%d",&calls);//reading calls
	if(calls<100)//checking condition
		printf("Bill is 250/-\n");
	else 
	{
		bill=250+((calls-100)*1.25);//calculating bill
		printf("Bill is %0.2f/-\n",bill);
	}

	return 0;
}

