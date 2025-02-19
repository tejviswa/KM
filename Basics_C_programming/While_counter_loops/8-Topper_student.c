/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 29-09-2024
* Program:For n students from a class read 6 subject marks for every student and calculate their percentage of marks and prrint who is topper of all(print the student number). 
* Sample Input :
* Sample output :Enter n students:2
* 				Enter 1st student 6 subject marks:
* 				40
* 				50
* 				45
* 				75
* 				60
* 				55
* 				Student 1 percentage is:54.16%
* 				Enter 2nd student 6 subject marks:
* 				45
* 				65
* 				55
* 				80
* 				40
* 				55
* 				Student 2 percentage is 55.66%
* 				Topper student ID is 2
*
*/


#include<stdio.h>
int main()
{
	int i=1,s1,s2,s3,s4,s5,s6,n,Topper,ret;//declaring inputs
	float perc,p1;//declaring inputs
	printf("Enter number of students marks you want to calculate\n");
	ret=scanf("%d",&n);//reading inputs
	while(ret!=1)//error handling
	{
		printf("Enter numbers only\n");
		getchar();
		ret=scanf("%d",&n);
	}
	printf("Enter student %d 6 subjects marks out of 100 each\n",i);
	ret=scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);//reading 6 subjects marks
	while(ret!=6)//error handling
	{
		printf("Enter marks only in digits\n");
		getchar();
		ret=scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
	}
	perc=(s1+s2+s3+s4+s5+s6)/6.0;//calculaitng percentage
	printf("Student %d percentage is %0.2f% \n",i,perc);
	p1=perc;
	i++;
	while(i<=n)//loop for number of students
	{
		printf("Enter student %d 6 subject marks:\n",i);
		scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
		perc=(s1+s2+s3+s4+s5+s6)/6.0;
		if(perc>p1)//comparing percentages of students
		{
			Topper=i;
			p1=perc;
		}
		printf("Student %d percentage is %0.2f% \n",i,perc);
		i++;
	}
	printf("Topper student ID is %d\n",Topper);


	return 0;
}

