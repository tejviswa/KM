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
#include"fun.h"

int my_stricmp(char s1[],char s2[]);

int main()
{
	int r;                                     
	char s1[100],s2[100];                           //declaring two strings
	printf("Enter string 1\n");
	scanf("%[^\n]s",s1);                        //reading string 1
	while(getchar()!='\n');
	printf("Enter string 2\n");
	scanf("%s[^\n]s",s2);                       //reading string 2


	r=my_stricmp(s1,s2);
	
	if(r==0)                                    //if(s1=s2) printing equal
		printf("Equal\n");  
	else if(r>0)                                 //if(s1>s2) printing s2
		printf("%s is first\n",s2);
	
	else if(r<0)                               //if(s1<s2) printing s1
		printf("%s is first\n",s1);

	return 0;
}



int my_stricmp(char s1[],char s2[])
{
	int i,r;
	char str1[100],str2[100];
	
	for(i=0;s1[i]!='\0';i++);
	my_strcpy(str1,s1);
	my_strcpy(str2,s2);
	my_strlwr(str1);
	my_strlwr(str2);
	r=my_strcmp(str1,str2);

}





































