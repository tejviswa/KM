/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 02-11-2024
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
int main()
{
	char s[100];
	char sub[40];
	char re[40];
	printf("Enter string\n");
	scanf("%[^\n]s",s);
	printf("Enter sub string\n");
	scanf("%[^\n]s",sub);
	printf("ENter re string\n");
	scanf("%[^\n]s",re);

	void strrep(s,sub,re);


	

	return 0;
}

void strrep(char s[],char sub[],char re[])
{
	int;
	l=strlen(sub);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
			s[i]=s[i]+32;
	}

	for(i=0;s[i]!='\0';i++)
	{
		if(s


	










