/*
* Name : Tejo prapulla
* Date : 18-09-2024
* KMID : KM56BESD04
* Program: Print no.of notes for given amount
* Sample Input :10650
* Sample output :
*
*/

#include<stdio.h>

int main()
{
	int a,q1,q2,q3,q4,r1,r2,r3;
	printf("Enter the amount in denominations of 50\n");
	scanf("%d",&a);
	q1=a/2000;
	r1=a%2000;
	q2=r1/500;
	r2=r1%500;
	q3=r2/100;
	r3=r2%100;
	q4=r3/50;
	printf(" No.of 2000/- notes are  %d\n",q1);
	printf(" No.of 500/- notes are %d\n",q2);
	printf(" No.of 100/- notes are %d\n",q3);
	printf(" N0.of 50/- notes are %d\n",q4);
	return 0;
}

