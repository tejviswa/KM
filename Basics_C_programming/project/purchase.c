/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 15-10-2024

*/


#include<stdio.h>

int extern st;                                                                    //extending the st value to this function
int extern max;                                                               //extending the max value to this function


/*
 *  @brief  : This function is used to purchase the items an updates the stock value
 *  @note   : Purchasing is done based on the availability of stock room that is set to 500.
 *  @Param1 : int
 *	@Param2 : int
 *	@retval : no return value
 */



void purchase()
{
	int ret,a,b;                                                    //declaring inputs
	
	printf("Purchasing new Item\n");                        //printing message
	printf("Enter number of items to purchase: ");         //Printing message

	ret=scanf("%d",&a);                                     //reading the value of purchase
	while(ret!=1)                                                //error handling
	{
		printf("Enter numbers only\n");                        //printing error message
		while(getchar()!='\n');                               
		ret=scanf("%d",&a);                                    //reading value again
	}

	max=500-st;                                              //calculating the remaining stock in stock room
	
	if(max==a||a<max)                                        //if the remaining stock is equal to the input purchase value or is less than the remaining stock value then the items are successfully purchased
	{

		st=st+a;                                            //updating the stock value by adding the given values with the previious stock value                                             
		printf("%d items are purchased succesfully\n",a);         //prinitng the message
		max=max-a;                                            //updating the maximum value
	}

	else if(a>max)                                         //checking if the given purchase value is greater than the max value 500
	{
		printf("Purchase is not succesful\n");                //printing message

		if(max==0)                                          //checking if the maximum value is 0 so that to print required message
		{
			printf("Stock is full\n");                        //printing message
		}
		else
			printf("Stock room is available for purchasing %d items only\n",max);   //printing message
	}

	else 
	{
		printf("Purchase is not succesful\n");                                        //printing message
		printf("Stock room is available for purchasing %d items only\n",max);            //printing message with remaining stock value
	}

}




