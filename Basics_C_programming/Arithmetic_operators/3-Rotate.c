/*
* Name : Tejo prapulla
* Date : 16-09-2024
* Program: Take three input integers x,y and z. Write a program to rotate their values such that, x has the value of y, y has the value of z and z has the value of x.
* Sample Input :1 2 3
* Sample output :
*Enter 3 integer values
*1 2 3
*before x=1 y=2 z=3
*After x=2 y=3 z=1
*
*/

#include<stdio.h>

int main()
{
	int x,y,z,sum,a,b,c;            //declaring input and ouput integer values
	printf("enter 3 interger values\n"); 
	scanf("%d%d%d",&x,&y,&z);         //reading input values
	printf("before x=%d y=%d z=%d\n",x,y,z); //printing values before rotating
	sum=x+y+z;         //calculating sum of 3 input values
	a= sum-(x+z);      //calculating the rotated x value
	b= sum-(x+y);      //calculating the rotated y value
	c= sum-(z+y);     //calculating the rotated z value
	printf("After x=%d y=%d z=%d\n",a,b,c);  //printing the rotated values
	return 0;
}

