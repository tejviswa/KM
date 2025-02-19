/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 05-10-2024
* Program: Write a calculator program with 5 functions below to do theoperations of addition,subtraction,multiplication,division for quotient and division for remainder.
* 
* Sample Input :25 5 *
* Sample output :Enter two numbers: 25 5
* 				ENter operator : *
* 				Result is 125
* 				Enter number 1
				a
				Enter numbers only
				25
				Enter number 2
				0
				Enter operator
				/
				Denominator must not be 0,Enter b value again
				26
				Result is 0.11

*
*/


#include<stdio.h>


/*
 *  @brief  : This function is used to add two given integers.
 *  @note   : Performing addition jsut using + operator.
 *  @Param1 : int
 *	@Param2 : int
 *	@retval : int - addition of a and b values
 */

int add(int a,int b)
{
	a=a+b;                    //performing addition
	return a;
}

/*
 *  @brief  : This function is used to subtract two given integers.
 *  @note   : Performing addition just using - operator.
 *  @Param1 : int
 *	@Param2 : int
 *	@retval : int - subtraction of a and b values
 */


int sub(int a,int b)
{
	a=a-b;                        //performing subtraction
	return a;
}


/*
 *  @brief  : This function is used to multiply two given integers.
 *  @note   : Performing addition just using * operator.
 *  @Param1 : int
 *	@Param2 : int
 *	@retval : int - multiplication of a and b values
 */




int mul(int a,int b)
{
	a=a*b;                       //performing multiplication
	return a;
}

/*
 *  @brief  : This function is used to divide two given integers and give result as quotient.
 *  @note   : Performing division just using / operator.
 *  @Param1 : int
 *	@Param2 : int
 *	@retval : int - division of a and b values
 */



int div(int a,int b)
{
	while(b==0)                           //checking if the denominator value is 0 or not.
	{
		printf("Denominator must not be 0,Enter b value again\n");
		getchar();
		scanf("%d",&b);                     //reading b value again
	}
	a=a/b;                                  //performing division
	return a;
}


/*
 *  @brief  : This function is used to divide two given integers give result as remainder.
 *  @note   : Performing division just using % operator.
 *  @Param1 : int
 *	@Param2 : int
 *	@retval : int - division of a and b values
 */


int mod(int a,int b)
{
	while(b==0)                       //checking the denominator value is 0 or not.
	{
		printf("Denominator must not be 0,Enter b value again\n");
		getchar();
		scanf("%d",&b);               //readig b value again
	}
	a=a%b;
	return a;
}


int main()
{
	int a,b,ret;                                //declaring inputs variables
	char ch;                                  //declaring inputs for operator
	
	printf("Enter number 1\n");
	ret=scanf("%d",&a);                      //reading number 1
	while(ret!=1)                           //error handling checking if the number is integer or not
	{
		printf("Enter numbers only\n");           //printing error message again
		getchar();
		ret=scanf("%d",&a);                   //reading number again
	}

	printf("Enter number 2\n"); 
	ret=scanf("%d",&b);                       //reading number 2
	while(ret!=1)                            //error handling checking if the number is integer or not
	{
		printf("Enter numbers only\n");         //printing error message again
		getchar();
		ret=scanf("%d",&b);                    //reading number again
	}

	printf("Enter operator \n");                  
	ret=scanf(" %c",&ch);                        //reading operator
	while(!(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%'))     //error handling
	{
		printf("Enter valid operator \n");  //printing error message to enter valid operator
		getchar();
		ret=scanf("%c",&ch);                   //reading operator again
	}

	switch(ch)                             //based on the operator particular function will be called to perform appropriate operation
	{
		case'+':a=add(a,b);break;
		case '-':a=sub(a,b);break;
		case '*':a=mul(a,b);break;
		case'/':a=div(a,b);break;
		case'%':a=mod(a,b);break;
	}
	printf("Result is %d \n",a);

	return 0;
}

