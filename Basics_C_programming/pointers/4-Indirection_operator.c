/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 22-10-2024
* Program: Declare 3 integer variables. Declare an integer pointer. Assign the address of each variable to the pointer in succession and print the value of the variable using indirection operator on the pointer.
* Sample Input :
* Sample output :
Enter 3 values    : 3 4 5
Value 1           : 3
Address of value 1: 0x7ffff5bc1614
Value 2           : 4
Address of value 2: 0x7ffff5bc1618
Value 3           : 5
Address of value 3: 0x7ffff5bc161c

Adress of pointer : 0x7ffff5bc1620

*
*
*
*
*/


#include<stdio.h>
int main()
{
	int a,b,c;                                         //decalring input varaibles
	printf("Enter 3 values    : ");

	scanf("%d %d %d",&a,&b,&c);                          //reading input variables

	while(ret!=3)                                         //error handling
	{
		printf("Enter correct values\n");
		while(getchar()!='\n');
		ret=scanf("%d %d %d",&a,&b,&c);
	}
	int *p1= &a;                                         //declaring pointer and assigning  address of variable a
	printf("Value 1           : %d\n",*p1);
	printf("Address of value 1: %p\n",p1);

	p1= &b;                                             //assigning pointer with adress of variable b
	printf("Value 2           : %d\n",*p1);
	printf("Address of value 2: %p\n",p1);
	
	p1= &c;                                             //assigning pointer with address of varible  c
	printf("Value 3           : %d\n",*p1);
	printf("Address of value 3: %p\n",p1);

	printf("\nAdress of pointer : %p\n",&p1);

	return 0;
}

