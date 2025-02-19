/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 21-10-2024
* Program: "Write a program to find the length of a string. Length is the number of characters in a string (null character is not counted).
eg., char name[10] = ""abc""; //size of name is 10 bytes
            // length of name is 3"
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
#include<string.h>
int main()
{
	char s[50];                              //declaring a string of size 50
	printf("Enter a string\n");            
	scanf("%[^\n]s",s);                  //reading the string
	printf("Size is :%ld length is %ld\n",sizeof(s),strlen(s));      //printing the size and lenght of the string

	return 0;
}

