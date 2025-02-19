/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 18-10-2024
* Program: Write a program to print an integer in binary format using arrays.
* Sample Input :
* Sample output :Enter an decimal inetger :32000
			    	Binary number is : 111110100000000

*
*/


#include<stdio.h>
int main()
{
	int d,i=0,j,ret;                                                     //declaring inputs
	int arr[15];                                                        //declaring array

	printf("Enter an decimal inetger :");                             
	ret=scanf("%d",&d);                                             //reading inputs
	while(ret!=1) 													//error handling
	{
		printf("Enter number correctly\n");
		while(getchar()!='\n');
		ret=scanf("%d",&d);                                  //resding input again
	}
	for(i=0;d>0;i++)
	{
		arr[i]=d%2;                                          //taking remainder of the given number each time until the number is >0 
		d=d/2;                                               //taking quotient of the number each time 
	}
	printf("Binary number is :");                      
	for(i=i-1;i>=0;i--)
	{
		printf("%d",arr[i]);                           //printing the remainders stored in array in reverse order
	}
	printf("\n");

	return 0;
}

