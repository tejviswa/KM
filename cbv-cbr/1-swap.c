/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 24-10-2024
* Program: Write a program to swap two numbers using Call by Value and Call by Reference.
* Sample Input :5 8
* Sample output :
* Enter two numbers :5 8
Before swap               a=5,b=8
After swap1              a=8,b=5
After swap-cbv in main()  a=5,b=8
After swap2              a=8,b=5
After swap-cbr in main()  a=8,b=5

*
*/


#include<stdio.h>



/*
 *  @brief  : This function is used to swap the contents of two variables
 *  @note   : swaping two varibles using temp variable
 *  @Param1 : int
 *  @Param2 : int
 *  @retval : void no return values
 */

void swap1(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	printf("After swap1              a=%d,b=%d\n",a,b);
}


/*
 *  @brief  : This function is used to swap the contents of the varibles adrresses using pointers
 *  @note   : swaping two pointer  contents  using temp variable
 *  @Param1 : int
 *  @Param2 : int
 *  @retval : void no return values
 */
void swap2(int *p1,int *p2)
{
	int t;
	t=*p1;
	*p1=*p2;
	*p2=t;
	printf("After swap2              a=%d,b=%d\n",*p1,*p2);
}



int main()
{
	int a,ret,b;                                    //declaring inputs
	printf("Enter two numbers :");
	ret=scanf("%d %d",&a,&b);                                  //reading inputs
	while(ret!=2)
	{
		printf("Enter values correctly\n");
		while(getchar()!='\n');
		ret=scanf("%d %d",&a,&b);
	}

	printf("Before swap               a=%d,b=%d\n",a,b);
	swap1(a,b);                                           //function call by values
	printf("After swap-cbv in main()  a=%d,b=%d\n",a,b);
	swap2(&a,&b);                                         //function call by resferance
	printf("After swap-cbr in main()  a=%d,b=%d\n",a,b);
	
	return 0;
}


