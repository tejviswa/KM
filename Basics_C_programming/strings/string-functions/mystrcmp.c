/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 25-10-2024
* Program: String compare function  
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
int my_strcmp(char s1[],char s2[]);
int main()
{
	int r;                                     
	char s1[100],s2[100];                           //declaring two strings
	printf("Enter string 1\n");
	scanf("%[^\n]s",s1);                        //reading string 1
	while(getchar()!='\n');
	printf("Enter string 2\n");
	scanf("%s[^\n]s",s2);                       //reading string 2
	
	r=my_strcmp(s1,s2);                         //function call
	if(r==0)                                    //if(s1=s2) printing equal
		printf("Equal\n");  
	else if(r>0)                                 //if(s1>s2) printing s2
		printf("%s is first\n",s2);
	else if(r<0)                               //if(s1<s2) printing s1
		printf("%s is first\n",s1);
	return 0;
}




/*
 *  @brief  : This function is used to compare the two strings
 *  @note   : taking the count value and comparing with it
 *  @Param1 : char
 *  @Param2 : char
 *  @retval : int - returns 0 if equal,return +ve value if s1>s2,return -ve value if s1<s2.
 */





int my_strcmp(char s1[],char s2[])
{
	int i,j,k=0,r;

	for(i=0;s1[i]!='\0';i++);
	i--;

	for(j=0;j<i;j++)
	{
		if(s1[j]==s2[j])
			k++;
		else
		{
			r=s1[j]-s2[j];
			break;
		}

	}

	if(k==i)
		return 0;
	else
		return r;
}

