/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 25-09-2024
* Program: Extend the percentage marks program to print the grade of the student using switch statement.
* Sample Input :50 35 72 85 93 64
* Sample output :Enter 6 subjects marks out of 100 each: 50 35 72 85 93 64
* 				First division
*
*/


#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,s6,a;//declaring inputs
	int perc;
	printf("Enter 6 subjects marks out of 100 each\n");
	scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
	perc=(s1+s2+s3+s4+s5+s6)/6;      //calculating percentage
	if(perc>0 && perc<39)           //checking conditoins of the given grades
		a=1;
	else if(perc>=40 && perc<=49)    
		a=2;
	else if(perc>=50 && perc<=59)
		a=3;
	else if(perc>=60 && perc<=79)
		a=4;
	else
		a=5;
	switch(a)//printing the grades according to percentage
	{
		case 1:printf("Fail\n");
			   break;
		case 2:printf("Third division\n");
			   break;
		case 3:printf("Second division\n");
			   break;
		case 4:printf("First division\n");
			   break;
		case 5:printf("Honours\n");
			   break;
		default:printf("Invalid\n");
	}
	return 0;
}

