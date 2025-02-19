/*
* Name : Tejo prapulla
* Date : 16-09-2024
* Program:Input 3 digits, read them into three different characters. Make one integer out of them and display. 
* Sample Input :2 6 4
* Sample output :264
*
*/

#include<stdio.h>

int main()
{
	char a,b,c;          //declaring 3 char variables for inputs
	int i,d,e,f;              //declaring 4 output variables
	printf("enter 3 digits\n");
	scanf("%c %c %c",&a,&b,&c); //reading input values
	d=a-'0';              //ASCII to int conversion 
	e=b-'0';          //ASCII to int conversion
	f=c-'0';            // ASCII to int conversion
	i=(d*100)+(e*10)+(f*1);  //converting 3 individual digits to single integer value
	printf("%d\n",i);     //print output integer value
	return 0;
}

