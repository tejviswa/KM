/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 24-10-2024
* Program: Write a function that can rotate the values of three variables. print the results in the main function.
* Sample Input :
* Sample output :
* Enter 3 values
1 2 3
Before rotate values are a=1,b=2,c=3
After rotate in rotate() a=2,b=3,c=1
After rotate in main()   a=2,b=3,c=1

*
*/


#include<stdio.h>



/*
 *  @brief  : This function is used to rotate the variables of 3 functions by using the addresses of the  variables with pointers 
 *  @note   : using an extra temp variable
 *  @Param1 : int
 *  @Param2 : int
 *  @Param3 : int
 *  @retval : void no return values
 */

void rotate(int *p1,int *p2,int *p3)
{
	int t;
	t=*p1;
	*p1=*p2;
	*p2=*p3;
	*p3=t;
	printf("After rotate in rotate() a=%d,b=%d,c=%d\n",*p1,*p2,*p3);
}



int main()
{
	int a,b,c,ret;                                        //declaring inputs
	printf("Enter 3 values\n");
	ret=scanf("%d %d %d",&a,&b,&c);                       //reading input variables
	while(ret!=3)
	{
		printf("Enter values correctly\n");
		while(getchar()!='\n');
		ret=scanf("%d %d %d",&a,&b,&c);
	}

	
	printf("Before rotate values are a=%d,b=%d,c=%d\n",a,b,c);
	rotate(&a,&b,&c);                                 //function call by reference 
	printf("After rotate in main()   a=%d,b=%d,c=%d\n",a,b,c);

	return 0;
}

