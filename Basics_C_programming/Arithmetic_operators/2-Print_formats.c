/*
* Name : Tejo prapulla
* Date : 16-09-2024
* Program:read a 4 digit number and print it in the following formats Using Arithmetic Operators. 
* Sample Input :4532
* Sample output :
output1:
2
3
5
4
output2:
4
5
3
2
output3:
4
45
453
4532
output4:
2354
output5:
    2
  3
 5
4

*
*/

#include<stdio.h>

int main()
{
	int a,q1,q2,q3,r1,r2,r3,r4;  //declaring 8 inputs
	printf("Enter 4 digit integer value: "); 
	scanf("%d",&a);               //reading input values
	
	q1=a/10;         //quotient of input value a
	q2=q1/10;        //quotient of input value q1
	q3=q2/10;      //quotient of input value q2

	r1=a%10;        //remainder of input value a
	r2=q1%10;       //remainder of q1 value
	r3=q2%10;      //remainder of  q2 value
	r4=q3%10;      //remainder of q3 value
		
	printf("output1:\n%d\n%d\n%d\n%d\n",r1,r2,r3,r4);
	printf("output2:\n%d\n%d\n%d\n%d\n",r4,r3,r2,r1);
	printf("output3:\n%d\n%d%d\n%d%d%d\n%d%d%d%d\n",r4,r4,r3,r4,r3,r2,r4,r3,r2,r1);
	printf("output4:\n%d%d%d%d\n%d%d%d\n%d%d\n%d\n",r4,r3,r2,r1,r4,r3,r2,r4,r3,r4);
	printf("output5:\n%d%d%d%d\n",r1,r2,r3,r4);
	printf("output6:\n   %d\n  %d\n %d\n%d\n",r1,r2,r3,r4);	
	return 0;
}

