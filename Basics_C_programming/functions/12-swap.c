/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 05-10-2024
* Program:  Write a function ,that can take two integers, swap their values and print their new values. return type should be void. function should print the values.
*
* Sample Input : 20 30
* Sample output :Enter number 1:20
				Enter number 2:30
				Before a=20,b=30 
				After a=30,b=20 
				Enter number 1:a
				Enter numbers only
				45
				Enter number 2:e
				Enter numbers only
				65
				Before a=45,b=65
				After a=65,b=45


*
*/


#include<stdio.h>


/*
 *  @brief  : This function is used to swap the contents of two vaiables
 *  @note   : This is done by using an extra variable
 *  @Param1 : int
 *	@Param2 : int
 *	@retval : It dosen't have any return value
 */


void swap(int a,int b)
{
	int c;                                                //decalring variable
	printf("Before a=%d,b=%d \n",a,b);                 //Printing values before swaping
	c=a;
	a=b;
	b=c;
	printf("After a=%d,b=%d \n",a,b);                  //printing values after swaping
}



int main()
{
	int a,b,ret;                                      //declairing inputs
	printf("Enter number 1:");
	ret=scanf("%d",&a);                            //reading number 1
	while(ret!=1)                                    //error handling checking if the return value is 1 or not for the integer
	{
		printf("Enter numbers only\n");                //printing an error message and reading value again
		getchar();  
		ret=scanf("%d",&a);
	}
	printf("Enter number 2:");           
	ret=scanf("%d",&b);                                 //reading number 2
	while(ret!=1)                                     //error handling checking if the number is integer is not
	{
		printf("Enter numbers only\n");
		getchar();
		ret=scanf("%d",&b);                           //reading number again
	}
	swap(a,b);                                     //Function call for swaping the contents of the variables

	return 0;
}

