/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 24-10-2024
* Program: Write a function that can take two integers as input, and gives 5 outputs : addition, subtraction, multiplication, quotient and reminder of those two numbers. Print the outputs in the main function.
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>


/*
 *  @brief  : This function is used to do the calclulator operation and storing results in  pointer variables.
 *  @note   : arithmetic operations on variables
 *  @Param1 : int
 *  @Param2 : int
 *  @Param3 : int
 *  @param4 : int
 *  @param5 : int
 *  @param6 : flaot
 *  @param7 : int
 *  @retval : void return values
 */




void calci(int a,int b,int *r1,int *r2,int *r3,float *r4,int *r5)
{
	if(b!=0)
	{

	*r1=a+b;
	*r2=a-b;
	*r3=a*b;
	*r4=(float)a/b;
	*r5=a%b;
	}
	if(b==0)
	{
		*r1=a+b;
		*r2=a-b;
		*r3=a*b;
		printf("Denominator must not be 0\n");
		
		printf("Denominator must not be 0\n");

}

int main()
{
	int a,b,c,r1,r2,r3,r5;                           //declaring input variables 
	float r4;                                        //declaring input
	printf("Enter two values\n");
	scanf("%d %d",&a,&b);                            //reading inputs
	while(ret!=2)
	{
		printf("Enter values correctly\n");
		while(getchar()!='\n');
		ret=scanf("%d %d",&a,&b);
	}

	calci(a,b,&r1,&r2,&r3,&r4,&r5);                     //function call-by-value and call-by reference
	printf("Addition  result is %d\n",r1);
	printf("Sub       result is %d\n",r2);
	printf("Mul       result is %d\n",r3);
	printf("Division  result is %.2f\n",r4);
	printf("Remainder result is %d\n",r5);

	return 0;
}

