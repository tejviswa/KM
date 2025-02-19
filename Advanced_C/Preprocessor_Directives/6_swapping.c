/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 22-01-2025
* Program: Define a macro to generate swapping function for int, float , double and character datatypes, as a generic function using macros.

* Sample Input :
* Sample output :
Select the data type
 1.int
 2.float
 3.char
3
Enter two characters
s d
Before
 a:s
 b:d
After
 a:d
 b:s
*
*/


#include<stdio.h>

#define SWAP(dtype,x,y)  {dtype t; t=x,x=y,y=t;}
int main()
{
	int d;
	printf("Select the data type\n 1.int\n 2.float\n 3.char\n");
	scanf("%d",&d);
	int a=0,b=0;
	float a1,b1;
	char a2,b2;


	switch(d)
	{
		case 1: printf("Enter two numbers\n");
				scanf("%d%d",&a,&b);
				printf("Before\n a:%d\n b:%d",a,b);
				SWAP(int,a,b);
				printf("\nAfter\n a:%d\n b:%d\n",a,b);break;

		case 2:	 printf("Enter two numbers\n");
				 scanf("%f%f",&a1,&b1);
				 printf("Before\n a:%.2f\n b:%.2f",a1,b1);
				 SWAP(float,a1,b1);
				 printf("\nAfter\n a:%.2f\n b:%.2f\n",a1,b1);break;

		case 3:	 printf("Enter two characters\n");
				 scanf(" %c%c",&a2,&b2);
				 printf("Before\n a:%c\n b:%c",a2,b2);
				 SWAP(char,a2,b2);
				 printf("\nAfter\n a:%c\n b:%c\n",a2,b2);
	}

	return 0;
}

