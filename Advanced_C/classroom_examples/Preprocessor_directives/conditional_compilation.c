/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 17-01-2025
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
#include "hi.h"
#if 1
//#define  M 1

int main()
{
#if M==1
	printf("16bit\n");
#elif M==2
	printf("32bit\n");
//#else
//	printf("64bit\n");
#endif
	return 0;
}
#endif


#if 0

int main()
{
	printf("%s\n",__DATE__);
	printf("%s\n",__TIME__);
#line 16 "h.c"
	printf("%d\n",__LINE__);
	printf("%s\n",__FILE__);
	printf("%d\n",__STDC__);

}
#endif




