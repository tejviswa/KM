/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 22-10-2024
* Program:  Write a program to add two variables using their pointers.
* Sample output :
Enter 2 values:78 64
Addition result is :142 

*/


#include<stdio.h>
int main()
{
	int x,ret,y;                                      //decaliring variables
	printf("Enter 2 values:");
	
	int *p1,*p2;                              //declaring pointers
	p1=&x;                                      //assigning address of x and y to pointers p1 and p2
	p2=&y;
	ret=scanf("%d %d",p1,p2);                          //reading inputs using pointer variables
	while(ret!=2)                                         //error handling
	{
		printf("Enter correct values\n");
		while(getchar()!='\n');
		ret=scanf("%d %d",p1,p2);
	}
	printf("Addition result is :%d \n",*p1+*p2);         //printing addition result using pointers
	
	return 0;
}

