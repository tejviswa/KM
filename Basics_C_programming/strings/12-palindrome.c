/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 21-10-2024
* Program:  int palindrome (char str[])
 return 1 if the given string is a palindrome, return 0 if it is not a palindrome

Sample output :
Enter string
123321
Palindrome
Enter string
tejo
Not a palindrome

*
*/


#include<stdio.h>
int mypalindrome(char s1[]);
int main()
{
	int r;                                                    //declaring inputs
	char s1[20];                                                //declaring string

	printf("Enter string\n");
	scanf("%[^\n]s",s1);                                       //reading string
	r=mypalindrome(s1);                                        //function call
	if(r==1)
		printf("Palindrome\n");                             //if return value 1 its palindrome
	else printf("Not a palindrome\n");                   //else not a palindrome

	return 0;
}



/*
 *  @brief  : This function is used to find the given string is palindrome or not
 *  @note   : comparing the string with another cloned and swapped string 
 *  @Param1 : char
 *	@Param2 : char
 *	@retval : int - returns 1 if palindrome ,returns 0 if not palindrome
 */






int palindrome(char s1[])
{
	int i,j,k,a,p=0;                                         //declaring inputs
	char s2[20];                                             //declaring string
	for(i=0;s1[i]!='\0';i++)
	{
		s2[i]=s1[i];                                       //cloning s1[] into s2[]
	}

	for(j=0,k=i-1;j<k;j++,k--)                         //reversing string
	{
		a=s1[j];
		s1[j]=s1[k];
		s1[k]=a;
	}

	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]==s2[i])                               //comparing if the both strings are equal to pass the palindrome condition
			p++;                         //if its palindrome then take count value
	}
	if(p==i)                             //if the count value is same as number of elements then its palindrome returns 1
		return 1;
	else 
		return 0;                          //otherwise returns 0
}















