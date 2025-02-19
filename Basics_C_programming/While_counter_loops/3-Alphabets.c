/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 29-09-2024
* Program:Read n characters from the user and print if each character is acapital alphabet,small alpphabet,numeric character or special character.
* Sample Input :
* Sample output :Enter n character:3
* 				Enter a character:b
* 				The given charcter b is a small alphabet
* 				Enter a character:?
* 				The given character is a special character
* 				Enter a character: B
* 				the given character B is a Capital alphabet
*
*/


#include<stdio.h>
int main()
{
	int i=1,n,ret;//declaring inputs
	char ch;//declaring inputs
	printf("Enter a number how many charcters you want to check\n");
	ret=scanf("%d",&n);//reading inputs
	while(ret!=1)//error handling
	{
		printf("Enter numbers only");
		getchar();
		ret=scanf("%d",&n);
	}
	while(i<=n)//loop until reading n characters
	{
		printf("Enter  a character\n");
		scanf(" %c",&ch);
		if(ch>=65&&ch<=90)//checkign condition if the character is Capital alphabet or not 
			printf("given charcter %c is Capital alphabet\n",ch);
		else if(ch>=97&&ch<=122)//checking condition if the character is small  alphabet or not
			printf("given character %c is small alphabet\n",ch);
		else if(ch>='0'&&ch<='9')//checking condition if the character is digit or not
			printf("given character %c is digit\n",ch);
		else 
			printf("given character %c is special character\n",ch);
		i++;
	}

	return 0;
}

