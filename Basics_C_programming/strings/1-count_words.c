/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 21-10-2024
* Program:  Take a string as an input, and count the number of words in the string. Take space, comma,exclamation, question mark and fullstop as delimitters for word counting.
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
int main()
{
	int i=0,w=0;                 //declaring inputs
	printf("ENter a string\n");
	char s[50];                      //declaring string with size 50
	scanf("%49[^\n]s",s);          //reading string upto newline
	while(s[i]!='\0')                 //loop until null character
	{

		
		if((s[i]==' '||s[i]==','||s[i]=='!'||s[i]=='?'||s[i]=='.'))     ///if the given character is any of the mentioned character then upto that count it as word
		{

			if(s[i+1]>=65&&s[i+1]<=90||s[i+1]>=97&&s[i+1]<=122)
			{
				w++;
			}
		}
		i++;        //otherwise repeat loop until null character found


	}
	
	if(s[0]>=65&&s[0]<=90||s[0]>=97&&s[0]<=123)
		w++;
	
	printf("No of words :%d\n",w);        //prints output

	return 0;
}

