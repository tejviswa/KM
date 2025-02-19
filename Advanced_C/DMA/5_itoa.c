/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 13-12-2024
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *itoa(int n)
{
	int a,c,res,j,l,i=0;
	char *s,temp;
	a=n;
	while(a)
	{
		a=a/10;
		c++;
	}
	c++;
	s=(char *)malloc(c*sizeof(int));
	
	//itoa
	while(n)
	{
		res=n%10;
		s[i]=res+'0';
		n=n/10;
		i++;
	}
	s[i]='\0';
	
	//strlen
	for(i=0;s[i]!='\0';i++);
	l=i;

	printf("l=%d\n",l);

	//strrev
	for(i=0,j=l-1;i<j;i++,j--)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
	

	return s;

}



int main()
{
	int n;
	char *p;
	printf("Enter number\n");
	scanf("%d",&n);

	p=itoa(n);
	printf("%s\n",p);

	return 0;
}

