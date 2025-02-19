/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 21-10-2024
* Program:  WAP to display the word expansion of a number
eg., Input String : "789"
Output : Seven Eight Nine"
*/


#include<stdio.h>
int main()
{
	int i=0;              //declaring inputs
	char s[20];                //declaring string
	printf("Enter string of numbers\n");
	scanf("%[^\n]s",s);               //reading string
	while(s[i]!='\0')                   //loop until null character
	{
		switch(s[i])                //checking the elements of string and printing its respective output
		{
			case'0':printf("Zero ");break;
			case '1':printf("One ");break;
			case '2':printf("Two ");break;
			case '3':printf("Three ");break;
			case '4':printf("Four ");break;
			case '5':printf("Five ");break;
			case '6':printf("Six ");break;
			case '7':printf("Seven ");break;
			case '8':printf("Eight ");break;
			case '9':printf("Nine ");break;
		}
		i++;               
	}
	printf("\n");


	return 0;
}

