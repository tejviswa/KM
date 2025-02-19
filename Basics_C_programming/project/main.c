/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 15-10-2024
* Program: Wap for the 4 departments of a supermarket:Sales,Purchase,Stock and main in four differeant source code files 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
#include"header.h"                                                        //header file
int st;                                                                    //declaring global variable for stock
int max=500;                                                                //declaring global variable for maximum value of stock room
int main()                                                                    //main function
{
	int n,ret;                                                           //declaring input variables

	printf("Welcome to the SUPERMARKET\n");                              //Greeting message
	while(1)                                                            //continious loop until exit is pressed
	{
		printf("\n1.Check Stock Availability\n");                         //displaying menu
		printf("2.Purchase new Item\n");
		printf("3.Sell Items\n");
		printf("4.Quit\n");                        
		
		printf("Enter Choice: ");                                         //entering choice from available menu options

		ret=scanf("%d",&n);                                                //reading choice from menu
		while(ret!=1)                                                      //error handling
		{
			printf("Error!!! Invalid Input \n\nEnter 1/2/3/4: ");                      //printing error message
			while(getchar() != '\n');
			ret=scanf("%d",&n);                                              //reading choice again
		}

		switch(n)                                                          //performing specific function call based on choice
		{   
			case 1:stock();break;                                        // stock function call
			case 2:purchase();break;                                         //purchase function call
			case 3:sell();break;                                           //sales function call
			case 4:printf("\nThank you for Shopping\n");                    //End greeting message and exit
				   return 0;
			default:printf("Enter correct choice\n");                         //error message if entered wrong choice
		}
	}

		return 0;
}

