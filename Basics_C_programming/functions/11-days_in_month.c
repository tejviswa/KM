/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 05-10-2024
* Program:  Write a function to accept a month and year as input, and return the number of days in that month as output. print the number of days in main.
*
* Sample Input : 1999 11
* Sample output :
Enter year in format (yyyy) 
1999          
Enter month in format (mm)
08
No of days 31

Enter year in format (yyyy)
a
Enter year correctly
2001
Enter month in format (mm)
we
Enter month correctly
Enter month correctly
06
No of days 31


*
*/


#include<stdio.h>



/*
 *  @brief  : This function is used to find the number of days by taking month and year as inputs
 *  @note   : Check  conditions for leap and non leap years and compare the month to get the days
 *  @Param1 : int
 *	@Param2 : int
 *	@retval : int  - calclulating days by month and year
 */



int days (int m,int y)
{
	int d;               //declaring variable
	if(m==2)             //checking condition for february if days 29 0r 28
	{
		if(y%100==0&&y%400==0||y%4==0)        //checking condition for leap year
			d=29;                        
		else
			d=28;
	}
	else if(m==4||m==9||m==11||m==6)             //checking for other months if days are 30 or 31
		d=30;
	else
		d=31;
	return d;              //return the days to main function
}




int main()
{
	int m,y,ret,d;                                   //decalring input variables
	printf("Enter year in format (yyyy) \n");
	ret=scanf("%d",&y);                             //reading year
	while(ret!=1)                                   //error handling condition checking to enter valid integer
	{
		printf("Enter year correctly\n");          //printiing error message
		getchar();                                   //clearing buffer
		ret=scanf("%d",&y);                           
	}
	printf("Enter month in format (mm)\n");       
	getchar();
	ret=scanf("%d",&m);                             //reading month
	while(ret!=1)                          //error handling condition checking to enter valid integer
	{
		printf("Enter month correctly\n");       //printig error message
		getchar();
		ret=scanf("%d",&y);
	}
	while((m<=0&&m>12))                          //checking for the month is valid or not
	{
		printf("Month should be between 0 to 12\n");
		getchar();
		scanf("%d",&m);                         //reading month again
	}

	d=days(m,y);                           //Function call to calculate the no.of days
	printf("No of days %d\n",d);         //printing no.of days

	return 0;
}

