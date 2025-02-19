/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 22-01-2025
* Program: Read an integer number, display the number as a number name expansion.
eg., 458 : four five eight
* Sample Input :
* Sample output :
* Enter number
058
zero five eight
*
*/


#include<stdio.h>

#if 0
#include<string.h>
int main()
{
	int a,temp,sum=0;
	char *numbers[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	printf("Enter number\n");
	scanf("%d",&a);
	

	while(a)
	{
		temp=a%10;
		sum=sum*10+temp;
		a=a/10;
	}
	
	while(sum)
	{
		temp=sum%10;
		printf("%s ",numbers[temp]);
		sum=sum/10;
	}

	return 0;
}
#endif


#if 1
int main()
{
	char a[10];
	int temp;
	int i;
	char *numbers[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	printf("Enter number\n");
	scanf("%[^\n]s",a);
	
	for(i=0;a[i]!='\0';i++)
	{
		temp=a[i]-'0';
		printf("%s ",numbers[temp]);
	}

	return 0;
}
#endif




