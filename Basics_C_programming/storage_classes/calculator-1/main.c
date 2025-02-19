/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 05-10-2024
* Program: Rewrite the calculator program so that the main function is in main.c , remaining functions are in another source code file, operations.c.
* Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. Function returns the result as return value.
* 
* Sample Input :* 4 5
* Sample output :
* Enter operator 
*
Enter number 1
5
Enter number 2
4
Result is 20.00 

Enter operator 
a
Enter valid operator 
/
Enter number 1
54.5
Enter number 2
87.9
Result is 0.62 

Enter operator 
%
Enter number 1
5
Enter number 2
0
Denominator must not be 0,Enter value again
98
Result is 5
*
*/

#include"header.h"
#include<stdio.h>
float a,b;
int a1,a2;
int main()
{
	int r1,ret;                                                                  //declaring inputs variables
	float r2;                                                                  //declaring inputs
	char ch;                                                                  //declaring inputs for operator
	
	
	printf("Enter operator \n");                  
	ret=scanf(" %c",&ch);                                                       //reading operator
	while(!(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%'))                       //error handling
	{
		printf("Enter valid operator \n");                                      //printing error message to enter valid operator
		getchar();
		ret=scanf("%c",&ch);                                                     //reading operator again
	}
	if(ch=='%')
	{
		printf("Enter number 1\n");
		ret=scanf("%d",&a1);                                                  //reading number 1
		while(ret!=1)                                                      //error handling checking if the number is integer or not
		{
			printf("Enter numbers only\n");                                  //printing error message again
			getchar();
			ret=scanf("%d",&a1);                                             //reading number again
		}

		printf("Enter number 2\n"); 
		ret=scanf("%d",&a2);                                               //reading number 2
		while(ret!=1)                                                         //error handling checking if the number is integer or not
		{  
			printf("Enter numbers only\n");                                //printing error message again
			getchar();
			ret=scanf("%d",&a2);
		}
		r1=mod();                                                            //Function call
		printf("Result is %d\n",r1);                                       //printing result
		return 0;                                                           //end of program
	}


	printf("Enter number 1\n");
	ret=scanf("%f",&a);                                                     //reading number 1
	while(ret!=1)                                                         //error handling checking if the number is integer or not
	{
		printf("Enter numbers only\n");                                        //printing error message again
		getchar();
		ret=scanf("%f",&a);                                                    //reading number again
	}

	printf("Enter number 2\n"); 
	ret=scanf("%f",&b);                                                        //reading number 2
	while(ret!=1)                                                      //error handling checking if the number is integer or not
	{
		printf("Enter numbers only\n");                                    //printing error message again
		getchar();
		ret=scanf("%f",&b);                                            //reading number again
	}



	switch(ch)                                   //based on the operator particular function will be called to perform appropriate operation
	{
		case'+':r2=add();break;
		case '-':r2=sub();break;
		case '*':r2=mul();break;
		case'/':r2=div();break;
	//	case'%':r2=mod();break;
	}
	printf("Result is %.2f \n",r2);                           //printing result

	return 0;
}

