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
#include"fun.h"

int main()
{
    int r,i,t;                                   //declaring inputs
    char ch;                                      //declaring character
    char s[45];                                     //declaring strings
    char s2[20];
    printf("Enter string: ");
    scanf("%[^\n]s",s);                                //reading string
    printf("Enter the character you want to search:");
    scanf(" %c",&ch);                                  //reading character that wanted to search
    for(i=0;s[i]!='\0';i++);

    r=my_strchr(s,ch);                                  //function call
    printf("Index of the character is: %d\n",r);

    return 0;
}

