/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 27-09-2024
* Program: Read n characters from the user and print if each character is vowel or not. 
* Sample Input :2 b i
* Sample output :Enter n characters:2
* 				Enter a character:b
* 				The given character b is not vowel
* 				Enter a character:?
* 				The given character is vowel
*
*/


#include<stdio.h>
int main()
{
	int i=1,ret,n;//declaring inputs
	char ch;//delcaring inputs
	printf("Enter number \n");
	ret=scanf("%d",&n);
	while(ret!=1)//error handling
	{
		printf("Enter numbers only\n");
		getchar();//clearing buffer
		ret=scanf("%d",&n);
	}

	while(i<=n)//loop until reading n characters
	{
		printf("Enter a character\n");
		scanf(" %c",&ch);
		if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')//checking condition if the character is Alphabet or not
		{
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')//checking condition if the character is vowel or not
				printf("The given character %c is vowel\n",ch);
			else
				printf("The given character %c is not a vowel\n",ch);
			i++;
		}
		else
		{
			printf("Enter characters only\n");
			getchar();
		}
	}
	return 0;
}

