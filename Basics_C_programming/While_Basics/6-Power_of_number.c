/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 26-09-2024
* Program:Write a program to find the power of anumber to the given number. 
* Sample Input :3 5
* Sample output :Enter numbers: 3 5
* 				3 to the power is 243
*
*/


#include<stdio.h>
int main()
{
	int i=1,a=1,n1,n2,ret;// declarig inputs
	printf(" ENter numbers\n");
	ret=scanf("%d %d",&n1,&n2);//error handling
	if(ret!=2)
	{
		printf("Invalid inputs\n");
		return 1;
	}
	if(n2<0)//checking condition
	{
		printf("power must be positive\n");
		return 1;
	}
	while(i<=n2)//loop for finding power
	{
		a*=n1;
		i++;
	}
	printf("%d to the power of %d is %d\n",n1,n2,a);

	return 0;
}

