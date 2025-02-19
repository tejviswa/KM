/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 05-10-2024
* Program: Write a function that takes a date as inputs and returns 1 if the date is valid,0 if the second date is old.
* Sample Input : 08-11-1999
* Sample output :ENter date in format(dd-mm-yyyy): 08-11-1999
* 				Valid date
*
*/



#include<stdio.h>


/*
 *  @brief  : This function is used to check the given date is valid or not
 *  @note   : Validation is done by comparing the given date with valid dates
 *  @Param1 : int
 *	@Param2 : int
 *	@param3 : int
 *	@retval : int  -validation of date,month and year
 */


int valid(int d,int m,int y)
{
	int v;
	if(y<0)                                                       //checking if the year is <0 
		v=0;
	if(m==2)                                                   //checkinng condition for month 2
	{
		if(y%100==0&&y%400==0||y%4==0)                         //checking for leap year
		{ 
			if(d>0&&d<=29)                                        //checking if the date in range
				v=1; 
			else 
				v=0;
		}
		else if(d>0&&d<=28)                          //if not leap year then checking the range again for another condition
			v=1;
		else 
			v=0;
	}
	else
	{
		if(m==4||m==6||m==9||m==11)                        //checking condition for months with 30 days
		{
			if(d>0&&d<=30)
				v=1;
			else v=0;
		}                                    
		else if(d>0&&d<=31) 
			v=1;
		else
			v=0;

	}
	return v;
}






int main()
{
	int d,m,y,v;                                                                   //declaring inputs
	printf("Enter date  in the format (dd-mm-yyyy) \n");
	scanf("%d-%d-%d",&d,&m,&y);                                                  //reading inputs date, month and year
	 

	
	if(m<=0&&m>12)                                                        //conditon for checking month range
		printf("Invalid date\n");
	else if(y<0)                                                        //checking for valid year
		printf("Invalid date\n");
	else
	{     
		v=valid(d,m,y);                                            //Function call to check for the validation of date
		if(v==1)                                               //Checking condition if v=1 then its valid otherwise Invalid.
			printf("Valid date\n");
		else
			printf("Invalid date\n");
	}
		
	return 0;
}
 
