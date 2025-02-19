#include<stdio.h>
int main()
{
float l,b,a,p;
printf("Enter length and breadth values of rectangle \n");
scanf("%f%f",&l,&b);
a=l*b;
p=2*(l+b);
printf("area = %f\n",a);
printf("perimeter = %f\n",p);
return 0;
}
