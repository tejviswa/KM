/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 05-11-2024
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	
	printf("After in swap():a=%d ,b=%d \n",*a,*b);
}
int main()
{
	int a=10,b=15;
	printf("Before in main :a=%d ,b=%d \n",a,b);
	swap(&a,&b);
	printf("After in main():a=%d ,b=%d \n",a,b);

	return 0;
}
