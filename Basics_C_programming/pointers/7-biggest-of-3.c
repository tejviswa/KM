/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 22-10-2024
* Program: Write a program to find the biggest of three numbers using pointers that point to those numbers.
* Sample Input :
* Sample output :
*
Enter 3 numbers
3 7 8 
8 is biggest

*
*/


#include<stdio.h>
int main()
{
	int a,b,c,ret;                              //declaring inputs
	int *p1,*p2,*p3;                      //declaring input variables
	
	p1=&a;                                 //assigning pointer with the address of the variables
	p2=&b;
	p3=&c;

	printf("Enter 3 numbers\n");
	scanf("%d %d %d",p1,p2,p3);
	while(ret!=3)
	{
		printf("Enter numbers only\n");
		while(getchar()!='\n');
		ret=scanf("%d %d %d",p1,p2,p3);
	}


	(*p1>*p2&&*p1>*p3)?printf("%d is biggest\n",*p1):(*p2>*p3)?printf("%d is biggest\n",*p2):printf("%d is biggest\n",*p3);;

	


	if(*p1>*p2&&*p1>*p3)                      //checking condition for biggest of 3 numbers
		printf("%d is biggest\n",*p1);              
	else if(*p2>*p3)
		printf("%d is biggest\n",*p2);
	else
		printf("%d is biggest\n",*p3);


	return 0;
}

