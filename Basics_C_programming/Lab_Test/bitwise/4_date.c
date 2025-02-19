/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 28-10-2024
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
int todate(short int m,short int d,short int y)
{
	int z,i;
	m=(m<<12);
	//printf("%x",d);
	
	d= d&(0x1f);

	d=d<<7;
	
	


	z=m|d|y;

	for(i=15;i>=0;i--)
	{
		if(z&(0x01<<i))
			printf("1");
		else
			printf("0");
	}

}

int main()
{

	
	 int d,y,m,r;
	printf("Enter month\n");
	scanf("%d",&m);
	printf("Enter date\n");
	scanf("%d",&d);
	printf("Enter year\n");
	scanf("%d",&y);
	
	//printf("%d\n",s);
	r=todate(m,d,y);

	
	//printf("%x",);
	


	return 0;
}

