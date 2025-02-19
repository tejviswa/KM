#include<stdio.h>
int main()
{
int a,b,c,d;
float e;
printf("enter any 4 integer values \n");
scanf("%d%d%d%d",&a,&b,&c,&d);
e= a+b+c+d;
e= e/4.0;
printf("Average of 4 integers is %f\n",e);
return 0;
}

