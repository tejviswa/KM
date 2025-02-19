#include<stdio.h>
int main()
{

int a;
float b;
unsigned int c;
 char d ;
unsigned char e;
short signed int f;
short unsigned int g;
long signed int h;
long unsigned int i;
double j;
long double k;


printf("Enter  number(integers): \n");
scanf("%d",&a);

printf("Enter  number(float): \n");
scanf("%f", &b);

printf("Enter  number(unsigned int): \n");
scanf("%u",&c);

printf("Enter  character(signed char): \n");
scanf(" %c",&d);

printf("Enter  character(unsigned char): \n");
scanf(" %c",&e);

printf("Enter  number(short signed integers): \n");
scanf("%hd",&f);

printf("Enter  number(short unsigned integers): \n");
scanf("%hu",&g);

printf("Enter  number(long signed integers): \n");
scanf("%ld",&h);

printf("Enter  number(long unsigned integers): \n");
scanf("%lu",&i);

printf("Enter  number(double): \n");
scanf("%lf",&j);

printf("Enter  number(long double): \n");
scanf("%LF",&k);


printf("signed int =  %d \n",a);
printf("float = %f \n",b);
printf("unsigned int =  %u \n",c);
printf("signed char =  %c \n",d);
printf("unsigned char =  %c \n",e);
printf(" short signed integer = %hd \n",f);
printf(" short unsigned integers = %hu \n",g);
printf(" long signed integers = %ld \n",h);
printf(" long unsigned integers = %lu \n",i);
printf(" double = %lf \n",j);
printf("long double = %LF \n",k);

return 0;
}

