/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 20-09-2024
* Program:Input an alphabet print its reverse case 
* Sample Input :T
* Sample output :Enter alphabet: T
*			   	t
*/


#include<stdio.h>
int main()
{
	char ch;//declaring input character
	printf("Enter alphabet: ");
	scanf("%c",&ch);//reading inputs
	ch=(ch>=65)?(ch<=90)?printf(" %c\n",ch+32):(ch>=97)?(ch<=122)?printf(" %c\n",ch-32):printf("Not an alphabet\n"):printf("Not an alphabet\n"):printf("Not an alphabet\n");//checking condition
//	ch=ch+32;
//	printf("%c\n",ch);
	return 0;
}

