/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 20-09-2024
* Program:Take integer as input and print its magnitude 
* Sample Input :-64
* Sample output :Enter number: -64
*					64
*/


#include<stdio.h>
int main()
{
	int num;//declare input
	printf("Enter number\n");
	scanf("%d",&num);//read input
	num>0?printf("%d\n",num):printf("%d\n",num*-1);//checking condition
	return 0;
}

