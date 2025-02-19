#include<stdio.h>
int main()
{

int p,n;
float r,si,m;
printf("Enter principle,time in months and ROI \n");
scanf("%d%d%f",&p,&n,&r);
m=n/12.0;
si=p*m*r/100;
printf("Simple interest = %f",si);

return 0;
}
