/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 21-12-2024
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
#include<calc.h>

int main()
{
	int ret;

#ifdef ADD
	ret=add(10,5);
	printf("%d\n",ret);
#endif

#ifdef SUB
	ret=sub(10,5);
	printf("%d\n",ret);
#endif
	

#ifdef MUL
	ret=mul(10,5);
	printf("%d\n",ret);
#endif


#ifdef DIV
	ret=div(10,5);
	printf("%d\n",ret);
#endif

	return 0;
}

