/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 21-09-2024
* Program: Find % of marks for 6 subjects calculate percentage and print the appropriate division.
* 80-100:Honours,60-79:1st division,50-59:2nd division,40-49:3rd division,0-39:Fail
* Sample Input :50 35 72 85 93 64
* Sample output :Enter marks of 6 subjects: 50 35 72 85 93 64
* 				1st division
*
*/


#include<stdio.h>
int main()
{
	int  sub1,sub2,sub3,sub4,sub5,sub6;// declaring inputs
	float perc;
	printf("Enter marks of 6 subjects\n");
	scanf("%d%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5,&sub6);//reading inputs

	perc=(float)(sub1+sub2+sub3+sub4+sub5+sub6)/6;//calculating percentage
	printf("percentage is %0.2f\n",perc);
	if(perc>0 && perc<=39)//checking condition
		printf("Fail\n");
	else if(perc>=40 && perc<=49)//checking condition
		printf("Third division\n");
	else if(perc>=50 && perc<=59)//checking condition
		printf("Second division\n");
	else if(perc>=60 && perc<=79)//checking condition
		printf("First division\n");
	else
		printf("Honours\n");

	return 0;
}

