/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 23-01-2025
* Program: read a date in d-m-y format and print it back in given format below:

eg input :2-3-2000
output: 2nd March, 2000

eg input: 4-1-2001
output: 4th January, 2001
* Sample Input :
* Sample output :
* Enter DOB(dd-mm-yyyy)
1-1-2000
1st January, 2000

*
*/


#include<stdio.h>
int main()
{
	int d,m,y;
	char *months[]={"January","February","March","April","May","June","July","August","September","Octbober","November","December"};
	
	char *suf[]={"st","nd","rd","th"};

	printf("Enter DOB(dd-mm-yyyy)\n");
	scanf("%d-%d-%d",&d,&m,&y);

	m--;

	if(d>3 && d<=20 || d>=24 && d<=30)
		printf("%d%s %s, %d\n",d,suf[3],months[m],y);
	else if(d==1 || d==21 || d==31)
		 printf("%d%s %s, %d\n",d,suf[0],months[m],y);
	else if(d%10==3)
		printf("%d%s %s, %d\n",d,suf[2],months[m],y);
	else
		 printf("%d%s %s, %d\n",d,suf[1],months[m],y);
	
	return 0;
}


	

		



