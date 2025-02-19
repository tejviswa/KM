/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 21-10-2024
* Program:  void strupr (char str[]);
 convert all lower case alphabets to upper case in the given string

eg., input : Hello
output : HELLO"
* */


#include<stdio.h>
void strupr(char s[]);

int main()
{

	char s[35];                             //declarig string
	printf("Enter string\n");
	scanf("%[^\n]s",s);                     //reading string
	
	strupr(s);                                //Function call
	
	return 0;
}


/*
 *  @brief  : This function is used to convert lower case to upper case
 *  @note   : lower case ascii value -32
 *  @Param1 : char
 *  @retval : void no return value
 */

void strupr(char s[]);
{
	int i=0;                              //declaring inputs
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

	
}

