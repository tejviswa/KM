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
void my_strncat(char d[],char s[],int n);

int main()
{
	int n;
    char s[25];                            //declaring source string
    char d[25];                            //declaring destination string
    printf("Enter destination string\n");
    scanf("%[^\n]s",d);                  //reading source string
    while(getchar()!='\n');
    printf("Enter source string\n");
    scanf("%[^\n]s",s);                  //reading destination string


	printf("Enter n value: ");
	scanf("%d",&n);

    my_strncat(d,s,n);                       //function call
	printf("%s\n",d);
	return 0;
}

void my_strncat(char d[],char s[],int n)
{
	int i,j,k,l;

	for(i=0;d[i]!='\0';i++);
	l=i+n;
	d[i]=' ';
	i++;

	for(j=i,k=0;j<l;j++,k++)
	{
		d[j]=s[k];
	}
}

















