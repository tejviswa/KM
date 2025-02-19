/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 05-10-2024
* Program: Write a function that can take an interger as input and return 1 if the nnumber is prime number,return 0 if the number is not a prime number and print appropriate output message in main according to output. return type is integer.function name is Prime.
* Sample Input :17
* Sample output :Enter number :17
* 				It's a prime number
* 				Enter number
				25
				Its not a prime number
				Enter number
                s
                Enter numbers only
                67
				Its a prime number


*
*/


#include<stdio.h>



/*
 *  @brief  : This function is used to find the given number is prime or not.
 *  @note   : checking the factors of given numbers so that we can decide its prime or not.
 *  @Param1 : int
 *	@retval : int - prime function of given number
 */

int prime(int n)                                            // Prime function
{
	int i,ret;                                              //declaring inputs
	for (i=2;i<=n/2;i++)                                    // loop for checking the factors of the given number and excluding 1 and the value itself
	{
		if((n%i)==0)                                       //checking if the given number is divisible or not
		{
			ret=0;
			break;
		}
	}
	if (i==(n/2)+1)                                 	      //prime number condition checcking
	{
		ret=1;
	}
	return ret;
}
	
int main()                                              	      //main function
{
	int n,ret;                                        	       //declaring inputs
	printf("Enter number\n");
	ret=scanf("%d",&n);											//reading inputs
	while(ret!=1)												//error handling
	{
		printf("Enter numbers only\n");
		getchar();
		ret=scanf("%d",&n);
	}
	ret=prime(n);    										  //Fucntion call
	if(ret==1)
		printf("Its a prime number\n");
	else
		printf("Its not a prime number\n");
	return 0;
}

