/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 17-01-2025
* Program:  Write down a macro to find the biggest of four numbers using biggest of 2 macro.
* Sample Input :
* Sample output :
ENter 4 numbers
43
56
78
12
biggest = 78

*
*/


#include<stdio.h>
#define  MAX(x,y)      ((x)>(y)?(x):(y))
#define  BIG(a,b,c,d)  MAX(a,MAX(b,MAX(c,d)))
int main()
{
	int a,b,c,d,big;
	printf("ENter 4 numbers\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	big=BIG(a,b,c,d);
	printf("biggest = %d\n",big);

	return 0;
}

