/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 05-10-2024
* Program:  Rewrite the calculator program so that the main function is in main.c , remaining functions are in another source code file, operations.c.
 
 Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. Function return value should be stored in another global variable in the operations file and be used to print in main.* 
* Sample Input : * 5 4 
* Sample output :
* 
*
Enter operator
*
Enter number 1
5
Enter number 2
7
Result is 35.00

Enter operator 
/
Enter number 1
g
Enter numbers only
5
Enter number 2
0
Denominator must not be 0,Enter value again
4
Result is 1.25 

* 				
* 			
*/

#include"header.h"
#include<stdio.h>
float r2;                                       //  declaring variables globally
float a,b;                                         //declaring input variables globally
int r1;
int a1,a2;                                        
int main()
{
	int ret;                                                                  //declaring inputs variables
	char ch;                                                               //declaring inputs for operator
	
	
	printf("Enter operator \n");                  
	ret=scanf(" %c",&ch);                                                 //reading operator
	while(!(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%'))                   //error handling
	{
		printf("Enter valid operator \n");                             //printing error message to enter valid operator
		getchar();
		ret=scanf("%c",&ch);                                              //reading operator again
	}
	if(ch=='%')
	{
		printf("Enter number 1\n");
		ret=scanf("%d",&a1);                                                 //reading number 1
		while(ret!=1)                                                       //error handling checking if the number is integer or not
		{
			printf("Enter numbers only\n");                                 //printing error message again
			getchar();
			ret=scanf("%d",&a1);                                             //reading number again
		}

		printf("Enter number 2\n"); 
		ret=scanf("%d",&a2);                                                  //reading number 2
		while(ret!=1)                                                    //error handling checking if the number is integer or not
		{
			printf("Enter numbers only\n");                                    //printing error message again
			getchar();
			ret=scanf("%d",&a2);
		}
		mod();                                                                  //function call
		printf("Result is %d\n",r1);                                             //printing result
		return 0;
	}


	printf("Enter number 1\n");
	ret=scanf("%f",&a);                                                      //reading number 1
	while(ret!=1)                                                        //error handling checking if the number is integer or not
	{
		printf("Enter numbers only\n");                                 //printing error message again
		getchar();
		ret=scanf("%f",&a);                                         //reading number again
	}     

	printf("Enter number 2\n"); 
	ret=scanf("%f",&b);                                                    //reading number 2
	while(ret!=1)                                                          //error handling checking if the number is integer or not
	{
		printf("Enter numbers only\n");                                   //printing error message again
		getchar();
		ret=scanf("%f",&b);                                             //reading number again
	}



	switch(ch)                             //based on the operator particular function will be called to perform appropriate operation
	{   
		case'+':add();break;
		case '-':sub();break;
		case '*':mul();break;
		case'/':div();break;
	//	case'%':r2=mod();break;
	}
	printf("Result is %.2f \n",r2);

	return 0;
}

