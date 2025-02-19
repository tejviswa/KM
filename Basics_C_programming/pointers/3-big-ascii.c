/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 22-10-2024
* Program:  Write a program to take input for two character variables using pointers and find out which character has higher ascii value.


* Sample output :
Enter 2 characaters
w W
w has high ascii value of 119

Enter 2 characaters
z D
z has high ascii value of 122


*
*/


#include<stdio.h>
int main()
{
	char ch1,ch2;                      //decalring charracter variables
	char *p1,*p2;                         //declaring pointer variables of datatype char
	p1=&ch1;                              //assigning adress of ch1 and ch2 to p1 and p2 
	p2=&ch2;

	printf("Enter 2 characaters\n");
	scanf("%c %c",p1,p2);                      //reading characters from user
	if(*p1>*p2)                                        //checking condition for greater ascii value
		printf("%c has high ascii value of %d\n",*p1,*p1);
	else printf("%c has high ascii value of %d\n",*p2,*p2);
	
	if(*p1==*p2)                                   //checking condition for equality
		printf("Both are equal\n");


	return 0;
}

