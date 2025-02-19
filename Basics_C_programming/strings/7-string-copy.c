/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 21-10-2024
* Program: void strcpy ( char d[] . char s[]);
copies all characters from source string (char s[]) to destination string( char d[]) , upto null character ( including null character).

* Sample Input :
* Enter source string 1
tejo
Enter destination string 1
prapulla

Sample Output:
Before string is prapulla
After string is tejo

*
*
*/


#include<stdio.h>
#include<string.h>


/*
 *  @brief  : This function is used to copy the source string to destination string.
 *  @note   : copying each element of string 
 *  @Param1 : char
 *	@Param2 : char
 *	@retval : no return value
 */

void tejcpy( char d[], char s[])                     //function decleration
{
	int i = 0;                     //declaring inputs
	printf("Before destination string is %s\n",d);
	while( s[i] !='\0')                 //loop until null character
	{
		d[i] = s[i];                      //copying the source string elements to destination string of elements
		i++;
	}
	d[i] = '\0';                        //assiging the last index of element to null character
	printf("After destination string is %s\n",d);      //printing the destination string after copying
}


int main()
{
	char s[30];                        //declaring source string
	char d[30];                            //declaring destination string
	printf("Enter source string 1\n");
	scanf("%[^\n]s",s);                   //reading source string
	while(getchar()!='\n');              //clearing buffer

	printf("Enter destination string 1\n");
	scanf("%[^\n]s",d);                    //reading destination string
	//strcpy(d,s);
	printf("Copy using library functions :%s\n",d);
	tejcpy(d,s);                            //function call

	return 0;
}

