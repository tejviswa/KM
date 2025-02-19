/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 05-10-2024
* Program: Write a function to accept ayear as input and return1 if the year is leap year,otherwise 0.
* Sample Input : 2015
* Sample output :Enter year: 2015
				Not a leap year
				Enter year: a
				Enter year correctly
				2078
				Not a leap year



*
*/


#include<stdio.h>


/*
 *  @brief  : This function is used to find the year is leap or not.
 *  @note   : check for the leap year condition and print apprpriate result.
 *  @Param1 : int
 *	@retval : int - leap year by using modulus operator
 */



int leap(int year)
{
	int ret;                                      //declaring variable
	if(year%100==0&&year%400==0||year%4==0)       //checking if the year is leap or not
		ret=1;
	else
		ret=0;
	return ret;                                  //returning the ret value to main()
}



int main()
{
	int year,ret;                             //declaring input variables
	printf("Enter year: ");
	ret=scanf("%d",&year);                      //reading input variables
	while(ret!=1)                              //error handling by checking the given input is integer or not.
	{
		printf("Enter year correctly\n");          //printing error message
		getchar();                              
		ret=scanf("%d",&year);                    //reading input again
	}
	ret=leap(year);                           //Function call for checking leap year
	if(ret==1)                                     
		printf("Leap year\n");
	else
		printf("Not a leap year\n");

	return 0;
}

