/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 20-09-2024
* Program: Find the power bill for the input number of units
* Sample Input :200
* Sample output :Enter units:200
* 				bill is 100/-
*
*/


#include<stdio.h>
int main()
{
	int units;//declaring inputs
	printf("Enter units\n");
	scanf("%d",&units);//
	if(units>0 && units<=200)//Checking condition
		printf("bill is 100/-\n");
	else if(units>200 && units<=400)//checking condition
		printf("bill is %.2f\n",100+(units-200)*0.65);
	else if(units>400 && units<=600)//checking condition
		printf("bill is %.2f\n",230+(units-400)*0.80);
	else 
		printf("bill is %d\n",390+(units-600)*1);
	return 0;
}

