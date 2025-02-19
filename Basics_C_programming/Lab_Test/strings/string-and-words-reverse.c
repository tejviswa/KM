/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 23-10-2024
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
int main()
{
	int i,j,k,l=0;
	char s1[100];
	char s2[100];

	printf("Enter a string\n");
	scanf("%[^\n]s",s1);



	//counting the elements
	
	for(i=0;s1[i]!='\0';i++);
	printf("i=%d\n",i);

	//counting spaces
	
	for(j=0;j<i;j++)
		if(s1[j]==' ')
			l++;
	printf("l=%d\n",l);

	//reverse entire string
	
	k=0;
	for(j=i-1;j>=0;j--,k++)
	{
		s2[k]=s1[j];
	}

	printf("%s\n",s2);


	//words reverse
	
	i=0;k=0;
	int t=0;

	for(;l>=0;l--)
	{

		if(s2[i]!=' ')
		{

			for(;s2[i]!=' ';i++);
			printf("word i=%d\n",i);
			t=i;

			for(j=i-1;j>=0;j--,k++)
			{
				s1[k]=s2[j];

			}
		}

		else
		{
			printf(" ");
			i++;
			k++;
		}

	}


	printf("%s\n",s1);


	return 0;
}

