/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 21-09-2024
* Program:Read two DOB's and print who is older
* Sample Input :08-11-199 16-06-2001
* Sample output :person born on 08-11-1999 is older
*
*/


#include<stdio.h>
int main()
{
	int d1,m1,y1,d2,m2,y2;//declaring inputs DOB1 DOB2
	printf("Enter date of birth of two persons one by one\n");
	scanf("%d-%d-%d",&d1,&m1,&y1);//reading DOB1
	scanf("%d-%d-%d",&d2,&m2,&y2);//reading DOB2
	
	if(y1>y2)//checking condition if Year1>Year2 of DOB1 DOB2
		printf("person born on %d-%d-%d is older\n",d2,m2,y2);
	else if(y1<y2)//checking condition if Year1<Year2 of DOB1 DOB2
		printf("person born on %d-%d-%d is older\n",d1,m1,y1);
	else//checking condition if Year1=Year2 of DOB1 DOB2
	{
		
		
			if(m1==m2)//checking condition if month1=month2 of DOB1 DOB2
			{
				if(d1>d2)//checking condition if day1>day2 of DOB1 DOB2
				{
					printf("person born on %d-%d-%d is older\n",d2,m2,y2);
				}
				else if(d1<d2)//checking condition if day1<day2 of DOB1 DOB2
				{
					printf("person born on %d-%d-%d is older\n",d1,m1,y1);
				}
				else//if day1=day2 of DOB1 DOB2
				{
					printf("Both are of same age\n");
				}
			}
			else if(m1>m2)//if m1>m2 of DOB1 DOB2
			{
				printf("person born on %d-%d-%d is older\n",d2,m2,y2);
			}
			else//if m1<m2 of DOB1 DOB2
			{
				printf("person born on %d-%d-%d is older\n",d1,m1,y2);
			}
		
	}



		return 0;
}

