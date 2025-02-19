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
int my_strstr(char str[],char sub[]);
int main()
{
	int r;

	char str[100],sub[100];

	printf("Enter a string\n");
	scanf("%[^\n]s",str);

	while(getchar()!='\n');

	printf("Enter sub string\n");
	scanf("%[^\n]s",sub);

	r=my_strstr(str,sub);
	
	if(r>=0)
		printf("Index of the first occurance of substring is %d\n",r);
	else
		printf("The  substring is not present in main string\n");

	return 0;
}



int my_strstr(char str[],char sub[])
{
	int l,in,k,j,i;

	for(i=0;sub[i]!='\0';i++);
	l=i-1;

	for(i=0;str[i]!='\0';i+l)
	{
		for(j=l,k=i;j>=0;j--,k++)
		{
			if(sub[j]==str[k])
				in=k;
			return in;


		}
	}
}












