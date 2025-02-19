
#include<stdio.h>
int main()
{
	int x;
	printf("enter a 4 digit value\n");	
	scanf("%d",&x);
	printf("%d\b\b\b    \n",x);
	printf("%d\b\b   \n",x);
	printf("%d\b  \n",x);
	printf("%d \n",x);
	printf("%d\b\b\b    \n",x);
	printf("%d\b\b  \r\b \n",x);
	printf("%d\b \r\b\b  \n",x);
	printf("%d\r\b\b\b   \n",x);	
	return 0;
}



/*	printf("%d \n",x/1000);
	printf("%d \n",x/100);
	printf("%d \n",x/10);
	printf("%d \n",x);
	printf("%d\b  \n",x/100);
	printf("%d\b\b \n",x/100);
	printf("  %d\b \n",x%100);
	printf("  %d\b\b \n",x%100);
	printf("%d \n",(x/1000)%100);
	printf(" %d \n",(x/100)%10);
	printf("  %d \n",(x/10)%10);
	printf("   %d \n",x%10); */	

