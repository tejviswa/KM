/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 05-10-2024
* Program: Write afunction to determine if a character is alphanumeric or not and print the appropriate output in main().(return 1 if it is alphanumeric,0 if it is not alphanumeric).Hint(int func_alphanum(char c)).
* Sample Input :5a 
* Sample output :Enter a chracter : 5a
* 				Its alphanumeric
* 				Enter a character
				?
				It's not alphanumeric

*
*/


#include<stdio.h>


/*
 *  @brief  : This function is used to find the given character is alphanumereic or not
 *  @note   : checking the character ASCII values  to conclude if its a alphanumeric or not.
 *  @Param1 : char
 *	@retval : int - alphanumeric of ch
 */


int alphanum(char c) //alphanumeric function
{
	int ret;                                                              //declarring inputs
	if(c >='A'&&c <='Z'||c >='a'&&c <='z'||c >='0'&&c <='9')              //checking if the entered character is alphanumeric or not
	{
		ret=1;                                                            // 1 for alphanumeric
	}
	else
	{
		ret=0;                                                            // 0 for not alphanumeric
	}
	return ret;
}



int main()                                                            //main function
{
	int ret;                                                         //declaring inputs
	char c;                                                           //declaring inputs
	printf("Enter a character\n");
	scanf("%c",&c);                                                    //reading input character
	ret=alphanum(c);                                                   //Function call
	if(ret==1)                                                        //checking if the return value 1 or not 
		printf("It's a alphanumeric\n");
	else
		printf("It's not alphanumeric\n");
	return 0;
}

