/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 22-10-2024
* Program:  int strchr( char str[], char ch)
 search the character ch ,in string str , whenever the first matching occurs, return the matching index.
Sample Input:
Enter string: tej o o
Enter the character you want to search:o
Sample Output:
Index of the character using user defined function is :4

* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
#include<string.h>
int mystrchr(char s[],char ch);
int main()
{
	int r,i,t;                                   //declaring inputs
	char ch;                                        //declaring character
	char s[45];                                     //declaring strings
	char s2[20];
	printf("Enter string: ");
	scanf("%[^\n]s",s);                                //reading string
	printf("Enter the character you want to search:");
	scanf(" %c",&ch);                                  //reading character that wanted to search
	for(i=0;s[i]!='\0';i++)             
	 
	r=mystrchr(s,ch);                                  //function call
	printf("Index of the charcater using library fuction is :%s \n",strchr(s,ch));
	printf("Index of the character using user defined function is: %d\n",r);

	return 0;
}



/*
 *  @brief  : This function is used to find the index of the character in a string
 *  @note   : comparing the character with elements of the string when found returning its index
 *  @Param1 : char
 *	@Param2 : char
 *	@retval : int - returns index of the 
 */


int mystrchr(char s[],char ch)
{
	int i;                         //decalring inputs

	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==ch)          //checking condtion for finding the index of the character
			return i;           //returning index of character
	}
}









