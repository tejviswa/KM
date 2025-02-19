/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 22-10-2024
* Program:  void strcat( char d[] , char s[]);
concatenates the content from source string to the end of destination string ( copy paste characters from s to  d , from null character index in d )
eg., char d[] = "Kernel";
char s[] = "Masters";

output: after concatenation d[] becomes " KernelMasters";
* */


#include<stdio.h>
#include<string.h>
void mystrcat(char d[],char s[]);

int main()
{
	char s[25];                            //declaring source string
	char d[25];                            //declaring destination string
	printf("Enter source string\n");
	scanf("%[^\n]s",d);                  //reading source string
	while(getchar()!='\n');
	printf("Enter destination string\n");
	scanf("%[^\n]s",s);                  //reading destination string



	mystrcat(d,s);                       //function call


	return 0;
}



/*
 *  @brief  : This function is used to concatinate the source string to destination string
 *  @note   : taking count of source string and adding remaininig elemests to the source string from destination string upto null charcater
 *  @Param1 : char
 *	@Param2 : char
 *	@retval : void no return value
 */



void mystrcat(char d[],char s[])
{
	int i,j,k;                                      //declaring inputs
	
	strcat(d,s);                                           //concatination using builtin functions
	printf("Concatination using built-in functions :%s\n",d);

	for(i=0;d[i]!='\0';i++);                         //concatintion using user defined functions

	for(j=i,k=0;d[j]!='\0',s[k]!='\0';j++,k++)
	{
		d[j]=s[k];
	}
	printf("Concatination using user defined functions :%s\n",d);
}





