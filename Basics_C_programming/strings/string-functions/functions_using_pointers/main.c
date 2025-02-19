/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 09-12-2024
* Program: User defined string functions using pointers.
*
*/


#include<stdio.h>
#include "fun.h"

int main()
{
	char *r;
    char s[50];                             
    char sub[50]="ll";
	char rep[20]="ee";
	

	printf("Enter a string\n");
    scanf("%[^\n]s",s);   


//	my_strreplacestr(s,sub,rep);

//	printf("%s\n",s);
/*
	r=my_strstr(s,sub);
	if(r==-1)
	{
		printf("substring not found\n");
	}
	else
		printf("%d \n ",r-s);
	
*/
	char ch='j';
	printf("%s\n",my_strchr(s,ch));
//	printf("strchr is %s \n",s);
		
//	my_strncat(d,s,3);
//	printf("strncat is %s \n",d);


/*
	r=my_strncmp(d,s,3);
	if(r==0)
	{
		printf("Both are equal\n");
	}
	else if(r>0)
	{
		printf("%s comes first\n",s);
	}
	else
		printf("%s comes first\n",d);
*/

//	printf("strcmp is %s \n");
//	my_strcpy(d,s);
//	printf("strcpy is %s \n",d);

//	my_strncpy(d,s,2);
//	printf("strncpy is %s \n",d);

//    printf(" length is %l \n",my_strlen(s));
//	my_strlwr(s);
 //	printf("strlwr is %s \n",s);

//	my_strupr(s);
//	printf("strupr is %s \n",s);	
	
//	my_strrev(s);
//	printf("strrev is %s \n",s);

	
	return 0;
}




