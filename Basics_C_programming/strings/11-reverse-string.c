/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 21-10-2024
* Program: void strrev( char str[]);

reverse the string (without using any extra array)

Sample input : str[] = "Kernel";
Sample output : str[] = "lenreK"
*
* 
*/


#include<stdio.h>

void strrev(char s[])
{
	int i,a,j,k;                                         //declaring input varaibles

	printf("str[] = \"");

	for(i=0;s[i]!='\0';i++)                              //finding the length of string and printig the input given string
		printf("%c",s[i]);
	printf("\"\n");
	
	
	
	for(j=0,k=i-1;j<k;j++,k--)                               //swaping the contents of the string 
	{
		a=s[j];
		s[j]=s[k];
		s[k]=a;
	}


	printf("str[] = \"%s\"\n",s);                     //printing the swapped string


}


int main()
{                         
	char s[30];                                 //declaring string
	printf("Enter a string\n");
	scanf("%[^\n]s",s);                      //reading string
	while(getchar()!='\n');
	strrev(s);                                 //function call
	

	return 0;
}

