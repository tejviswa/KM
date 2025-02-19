/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 21-10-2024
* Program: int strlen( char str[]);
returns the length of the string.
Sample Input:
Enter a string
Tejo 264
Sample Output:
Length of string is :8

*/


#include<stdio.h>


/*
 *  @brief  : This function is used to find the length of string
 *  @note   : runnig the for loop until null character
 *  @Param1 : int
 *	@retval : int - printing loop count value
 */



int tejlen(char s[])                     //declaring function
{
	int i;                     //declaring inputs
	for(i=0;s[i]!='\0';i++);                 //running loop until null character
	return i;           //returning count value
}

int main()
{
	int i;                                     //declaring inputs
	char s[30];                                 //declaring string of size 30
	printf("Enter a string\n");
	scanf("%[^\n]s",s);                      //reading string 
	i=tejlen(s);                                //function call
	printf("Output\nLength of string is :%d\n",i);   //printing length of string

	return 0;
}

