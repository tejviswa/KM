/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 12-12-2024
* Program: Find the occurance of character in a string.
* Sample Input :
* Sample output :
* Enter a string
tejo
Occurance of t = 1
Occurance of e = 1
Occurance of j = 1
Occurance of o = 1

*
*/


#include<stdio.h>
int main()
{
	int i,j,c=0;
	char s[50];
	printf("Enter a string \n");
	scanf("%[^\n]s",s);
	
	for(i=0;s[i]!='\0';i++)
	{ 
		c=0;
		for(j=0;s[j]!='\0';j++)
		{
			if(s[i]==s[j])
			{
				c++;
			}
		}
		printf("Occurance of %c = %d \n",s[i],c);
	}
	return 0;
}

