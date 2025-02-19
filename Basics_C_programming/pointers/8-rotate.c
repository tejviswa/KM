/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 22-10-2024
* Program: Take three input integers x,y and z. Write a program to rotate their values such that, x has the value of y, y has the value of z and z has the value of x. Do this using pointers that point to x,y and z.
* Sample Input :
* Sample output :
Enter 3 values:3 4 5
Before swap
Value of x :3
Value of y :4
Value of z :5
After swap
Value of x :4
Value of y :5
Value of z :3

*
*/


#include<stdio.h>
int main()
{
	int x,y,z,ret;                            //decalaring inputs
	int *p1,*p2,*p3,p4;                        //declaring pointers

	p1=&x;                                    //assigning the addresses of x,y and zto the pointers p1,p2 and p3.
	p2=&y;
	p3=&z;

	printf("Enter 3 values:");
	ret=scanf("%d %d %d",p1,p2,p3);            //reading 3 values using pointers
	
	while(ret!=3)
	{
		printf("Enter numbers only\n");
		while(getchar()!='\n');
		ret=scanf("%d %d %d",p1,p2,p3);
	}

	printf("Before swap\n");
	printf("Value of x :%d\n",*p1);
	printf("Value of y :%d\n",*p2);
	printf("Value of z :%d\n",*p3);

	p4=*p1;
	*p1=*p2;                             //changing the pointer addresses as required
	*p2=*p3;
	*p3=p4;

	
	printf("After swap\n");
	printf("Value of x :%d\n",x);
	printf("Value of y :%d\n",y);
	printf("Value of z :%d\n",z);

	
	return 0;
}

