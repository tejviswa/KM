#include<stdio.h>
int main()
{
float s,p,n,c;
printf("Enter the saleprice,profit and no.of items \n");
scanf("%f%f%f",&s,&p,&n);
c=(s-p)/n;
printf("cost price of each item = %f\n",c);
return 0;
}

