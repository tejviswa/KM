/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 25-10-2024
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
void my_strncpy(char d[],char s[],int n);
int main()
{
	int n;
	char s[100],d[100];
	
	printf("Enter source string1\n");
	scanf("%[^\n]s",s);
	while(getchar()!='\n');

	printf("Enter destination string \n");
	scanf("%[^\n]s",d);

	printf("Enter n value:");
	scanf("%d",&n);
	
	my_strncpy(d,s,n);

	printf("%s\n",d);

	return 0;
}


void my_strncpy(char d[],char s[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		d[i]=s[i];
	}
	d[i]='\0';
	
}

	
	









