/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 21-10-2024
* Program: "Write a program to convert a string into upper case and print.
eg., input : Hello
output : HELLO"
* */


#include<stdio.h>
int main()
{
	int i=0;                              //declaring inputs
	char s[35];                             //declarig string
	printf("Enter string\n");
	scanf("%[^\n]s",s);                     //reading string
	printf("Before coversion :%s\n",s);
	while(s[i]!='\0')                       //loop until null charcater
	{
		if(s[i]>=97&&s[i]<=120)                //checking for lowercase letters
		{
			s[i]=s[i]-32;             //converting to uppercase
		}
		i++;
	}
	printf("After conversion :%s\n",s);            //printing final string

	return 0;
}

