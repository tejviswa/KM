/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 21-10-2024
* Program: void strlwr( char str[]);
 convert all upper case alphabets to lower case in the given string.

Sample Input :
Enter string
TEJO PRAPULLA

Sample Output:
Before coversion :TEJO PRAPULLA
After conversion :tejo prapulla

* Sample output :
*
*/


#include<stdio.h>

void strlwr(char s[]);

int main()
{
    char s[35];                             //declarig string
    printf("Enter string\n");
    scanf("%[^\n]s",s);                     //reading string
    
	strlwr(s);                             //function call
	return 0;
}



/*
 *  @brief  : This function is used to convert upper case to lower case
 *  @note   : upper case ascii value +32
 *  @Param1 : char
 *	@retval : void no return value
 */


void strlwr(char s[])
{
	int i=0;                                         //declaring inputs
	printf("Before coversion :%s\n",s);

    while(s[i]!='\0')                       //loop until null charcater
    {
        if(s[i]>='A'&&s[i]<='Z')                //checking for uppercase letters
        {
            s[i]=s[i]+32;             //converting to lowercase
        }
        i++;
    }
    printf("After conversion :%s\n",s);            //printing final string

}

