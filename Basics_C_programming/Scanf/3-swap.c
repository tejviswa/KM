#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two values\n");
	scanf("%d%d",&a,&b);
	printf("Before swap\n a=%d b=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	
	printf("After swap\n a=%d b=%d\n",a,b);
	return 0;
}

		
