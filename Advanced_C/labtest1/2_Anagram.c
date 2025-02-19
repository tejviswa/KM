/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 12-12-2024
* Program: Check the given strings are anagram or not
* Sample Input :
* Sample output :
Enter  strings 
car
arc
Anagram

Enter  strings 
listen
silent
Anagram

Enter  strings
cat
car
Not anagram

*/


#include<stdio.h>
int main()
{
	int i,j,l,c=0;
	char s1[50],s2[50];
	printf("Enter  strings \n");
	scanf("%[^\n]s",s1);

	while(getchar()!='\n');
	scanf("%[^\n]s",s2);

	for(i=0;s1[i]!='\0';i++);     //string length
	l=i;
	
	for(i=0;s1[i]!='\0';i++)
	{
		
		for(j=0;s2[j]!='\0';j++)
		{
			if(s1[i]>='A' && s1[i]<='Z')
				s1[i]+=32;
			
			if(s2[j]>='A' && s1[j]<='Z')
				s2[j]+=32;

			if(s1[i]==s2[j])
			{
				c++;
			}
		}
		
	}
	if(c==l)
	{
	printf("Anagram\n");
	}
	else
		printf("Not anagram\n");
	
		
	return 0;
}

