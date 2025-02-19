/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 25-10-2024
* Program: 
* Sample Input :
* Sample output :
*
*/

#include<stdio.h>

int my_strrchr(char s[],char ch);
int main()
{
    int r,i,t;                                   //declaring inputs
    char ch;                                      //declaring character
    char s[100];                                     //declaring strings
    printf("Enter string: ");
    scanf("%[^\n]s",s);                                //reading string
    printf("Enter the character you want to search:");
    scanf(" %c",&ch);                                  //reading character that wanted to search
    for(i=0;s[i]!='\0';i++);

    r=my_strrchr(s,ch);                                  //function call
    if(r>=0&&r<i)
		printf("Index of the character is: %d\n",r);
	else 
		printf("character is not in string\n");

    return 0;
}


int my_strrchr(char s[],char ch)
{
	int i,j,k=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==ch)
			j=i;
		else if(s[i]!=ch)
			k++;
	}
	if(k==i)
		return -1;  //if character not present in string returns -1
	else
	return j;
}













