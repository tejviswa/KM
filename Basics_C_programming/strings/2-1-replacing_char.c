/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 21-10-2024
* Program: Write a program to replace a given character by another character in a string.

* Sample INPUT:
Enter a string
hello
Which character you want to replace:l
Enter replacing character:a
SAMPLE Output:
 heaao

*
*/


#include<stdio.h>
int main()
{
	int i,k;                                //declaring inputs
	char c,b;                                 //declaring inputs
	char s[64];                                //decalirng string of size 64
	printf("Enter a string\n");   
	scanf("%[^\n]s",s);                          //reading string of charcaters
	printf("Which character you want to replace:");
	scanf(" %c",&c);                                 //reading the character that user want to replace
	printf("Enter replacing character:");
	scanf(" %c",&b);                              //reading the charcter that user want to replace with
	i=0;
	k=0;

	while(s[i]!='\0')                        //run loop until null character
	{
		if(s[i]==c)                         //if the given character matches then enter the condition
		{
			s[i]=b;                //replacing the character 
			k++;                   //if character present then incrementing the count value 
		}
		i++;                       //incrementing for loop count
	}
	
	if(k==0)                                //if character not present then print message
		printf("%c is not present in string\n",c);
	else
		printf(" %s\n",s);              //else print string

	return 0;
}

