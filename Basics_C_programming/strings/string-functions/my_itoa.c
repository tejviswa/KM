/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 06-11-2024
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
#include"fun.h"
void my_itoa(int num);
int main()
{
	int n;

	printf("Enter number\n");
	scanf("%d",&n);
	my_itoa(n);

	return 0;
}



void my_itoa(int num)
{
    int i=0,res;
    char str[50];
    while(num)
    {
        res=num%10;
        str[i]=res+'0';
        num=num/10;
        i++;
    }
    str[i]='\0';
    my_strrev(str);
    printf("%s\n",str);
}

