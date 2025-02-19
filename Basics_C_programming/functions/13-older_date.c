/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 05-10-2024
* Program: Write a function that takes 2 dates as inputs and returns 1 if the first date is old,2 if the second date is old.
* Sample Input : 08-11-1999 16-06-2001
* Sample output : Enter date 1:08-11-1999
* 				Enter date 2: 16-06-2001
* 				08-11-1999 is older
*
*/


#include<stdio.h>



/*
 *  @brief  : This function is used to find which date is older from the given two dates.
 *  @note   : its done by compairng the years,months and days of each date
 *  @Param1 : int
 *	@Param2 : int
 *	@Param3 : int
 *	@Param4 : int
 *	@Param5 : int
 *	@Param6 : int
 *	@retval : int - olderdate comparisoin of two dates
 */


int older(int d1,int m1,int y1,int d2,int m2,int y2)
{
	int old;                   
	if(y1>y2)                                       //checking condition for year
		old=2;
	else if(y1<y2)                                //checking conditon for year
		old=1;
	else if(y1==y2)                              //checking condition if both years are equal
	{
		if(m1==m2)                           //checking condition if both months are equal
		{
			if(d1==d2)                         //checking if both dates are equal 
				old=0;
			else if(d1>d2)                     //checking condition for dates
				old=2;
			else
				old=1;
		}
		else if(m1>m2)                       //checking condition for months
			old=2;
		else 
			old=1;
	}
	else
		old=0;
	return old;
}





int main()
{
	int d1,m1,y1,d2,m2,y2,ret,old;                                   //declaring inputs
	printf("Enter date 1 in the format (dd-mm-yyyy) \n");
	scanf("%d-%d-%d",&d1,&m1,&y1);                                    //reading inputs
	printf("Enter date 2 in the format (dd-mm-yyyy) \n");
	scanf("%d-%d-%d",&d2,&m2,&y2);                                     //reading inputs

	if(m2==2&&d1<=0&&d1>29)                              // checking for month 2 condition 
		printf("Invalid date\n");

	else if(m1<=0&&m1>12)                                   //checking for month range
		printf("Invalid date\n");

	else if(y1<0&&y2<0)                                   //checking for valid year
		printf("Invalid date\n");
	else
	{
	
		old=older(d1,m1,y1,d2,m2,y2);                     //Function call

		if(old==1)
			printf("%d-%d-%d\n",d1,m1,y1);
		else if(old==2)
			printf("%d-%d-%d\n",d2,m2,y2);
		else
			printf("Both are equal\n");
	}
	return 0;
}

