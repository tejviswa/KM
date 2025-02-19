/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 15-10-2024
* Program: sales function
*
*/


#include<stdio.h>

int extern st;                               //extending the variable st to this function
//int extern max;                                //extending the variable max stock room value to this function

/*
 *  @brief  : This function is used to perform the sell operation and update the stock value
 *  @note   : selling is done by subtracting the available stock with the given sale quantity
 *	@retval : no return value
 */


void sell()
{
	int b;                                                                 //declaring input variable
	printf("Sell Items\n");                                              //printing message
	printf("Enter number of items to sell: ");                            //printing message

	scanf("%d",&b);                                                         //reading the number of items to sell

	if(b>st)                                            // checking if the number of items given by user is greater than current stock value
	{
		printf("selling is not success\n");                           //then the sale is not succesful
		if(st==0)                                                     //checking if the stock value is 0 
		{    
			printf("Stock is empty\n");                           // if the stock is empty we can't sell further so printing stock is empty
		}
		else
			printf("%d stocks are available to sell\n",st);                //or else printing the stock items available for sale 
	}
	else
	{
		printf("%d items sold succesfully\n",b);              //if the given sale items are less than the stock then the sale is succesful
		st=st-b;                                                       //updating the stock value after a succesfull sale
		
	}


}

