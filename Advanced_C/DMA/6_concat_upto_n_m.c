/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 13-12-2024
* Program: 
* Sample Input :
* Sample output :
Enter string1 &string2
kernal masters
raayan systems
Enter n&m values
3
5
output:
kerraaya
*
*/


#include<stdio.h>
#include<stdlib.h>

char *cat(char s1[],char s2[],int n,int m)
{
	int i,j;

	for(i=n,j=0;j<m;i++,j++)
	{
		s1[i]=s2[j];
	}
	s1[i]='\0';

	return s1;
}


int main()
{
	int n,m;
	char s1[50],s2[50], *p;
	printf("Enter string1 &string2\n");
	scanf("%[^\n]s",s1);
	while(getchar()!='\n');
	scanf("%[^\n]s",s2);

	printf("Enter n&m values\n");
	scanf("%d%d",&n,&m);

	p=cat(s1,s2,n,m);

	printf("%s\n",p);

	return 0;
}

