/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 25-09-2024
* Program: C program to find biggest of two numbers using switch statement.
* Sample Input :25 64
* Sample output :Enter 2 numbers: 25 64
* 				 64 is biggest
* 					
*
*/


#include<stdio.h>
int main()
{
	int num,num1,num2,a; //declaring inputs
	printf("Enter 2 numbers\n");
	a=scanf("%d%d",&num1,&num2);//reading inputs
	//printf("%d\n",a);
	if(a==2)//error handling checking if both the inputs are numbers only
	{
	if(num1>num2)
		num=1;
	switch(num)   //comparing numumbers results a true or false condition 1 or 0 
	{
		case 1:printf("%d is biggest\n",num1);
			   break;
		default:printf("%d is biggest\n",num2);
			   break;

	}
	}
	else printf("Enter only numbers\n");
	
	return 0;
}

