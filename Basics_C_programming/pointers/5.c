/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 22-10-2024
* Program:  Declare 3 pointer variables of integer type, and an integer variable. Assign the address of integer variable to the 3 pointers. Print the variable value using indirection on each pointer variable. Change the variable value directly and check the values of each of the pointers using indirection. Change the variable value , using each pointer and print the variable value and indirected values of all pointers every time you change.
* Sample Input :
* Sample output :
* Enter value:25
Value in pointer1 :25
Value in pointer2 :25
Value in pointer3 :25
Enter a value to change:45
Value in pointer1 :45
Value in pointer2 :45
Value in pointer3 :45
Changing value in pointer1 to: 65
Value in variable :65
Value in pointer2 :65
Value in pointer3 :65
Changing value in pointer2 to: 32
Value in variable :32
Value in pointer1 :32
Value in pointer3 :32
Changing value in pointer3 to: 98
Value in variable :98
Value in pointer2 :98
Value in pointer1 :98

*
*/


#include<stdio.h>
int main()
{
	int a,ret;
	
	printf("Enter value:");
	ret=scanf("%d",&a);

	while(ret!=1)                                         //error handling
	{
		printf("Enter correct values\n");
		while(getchar()!='\n');
		ret=scanf("%d",&a);
	}

	int *p1,*p2,*p3;
	p1=p2=p3=&a;

	printf("Value in pointer1 :%d\n",*p1);  printf("Value in pointer2 :%d\n",*p2);  printf("Value in pointer3 :%d\n",*p3);

	printf("Enter a value to change:");scanf("%d",&a);

	printf("Value in pointer1 :%d\n",*p1);  printf("Value in pointer2 :%d\n",*p2);  printf("Value in pointer3 :%d\n",*p3);

	printf("Changing value in pointer1 to: ");scanf("%d",p1);

	printf("Value in variable :%d\n",a);  printf("Value in pointer2 :%d\n",*p2);  printf("Value in pointer3 :%d\n",*p3);

	printf("Changing value in pointer2 to: ");scanf("%d",p2);

	printf("Value in variable :%d\n",a);  printf("Value in pointer1 :%d\n",*p1);  printf("Value in pointer3 :%d\n",*p3);
	
	printf("Changing value in pointer3 to: ");scanf("%d",p3);

	printf("Value in variable :%d\n",a);  printf("Value in pointer2 :%d\n",*p2);  printf("Value in pointer1 :%d\n",*p1);
	return 0;
}

