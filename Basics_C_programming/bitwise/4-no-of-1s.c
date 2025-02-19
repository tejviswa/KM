/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 27-10-2024
* Program: WAP to count the bits set (bit value 1 ) in an integer? Find out and compare different possibilities?
* Sample Input :
* Sample output :
* Enter number:5
count1 is :2
count2 is :2
count3 is :2

*
*/


#include<stdio.h>


/*
 *  @brief  : This function is used to find  the number of 1's in given digit
 *  @note   : doing AND operation and left shift by 1 each time
 *  @Param1 : int
 *  @retval : int - returns the count value
 */


int count1(int x)
{
	int c=0,i;
	for(i=0;i<32;i++)
	{
		if(x&0x01<<i)
			c++;
	}
	return c;
}


/*
 *  @brief  : This function is used to find  the number of 1's in given digit
 *  @note   : doing AND operation and checking if the number is not 0 then incrementing count
 *  @Param1 : int
 *  @retval : int - returns the count value
 */

int count2(int x)
{
	int c=0;
	while(x!=0)
	{
		if((x&0x01)!=0)
			c++;
		x=x>>1;
	}
	return c;
}

/*
 *  @brief  : This function is used to find  the number of 1's in given digit
 *  @note   : doing AND operation with the previous number if x is non 0 then incremmenting count
 *  @Param1 : int
 *  @retval : int - returns the count value
 */


int count3(int x)
{
	int c=0;
	while(x!=0)
	{
		x=x&(x-1);
		c++;
	
	}
	return c;
}

int main()
{
	int c1,c2,c3;
	unsigned int n;                             //declaring an unsigned interger varaible

	printf("Enter number:");
	scanf("%d",&n);                               //reading number
	c1=count1(n);                               //function call
	printf("count1 is :%d\n",c1);

	c2=count2(n);                                 //function call
	printf("count2 is :%d\n",c2);
 
	c3=count3(n);                              //function call
	printf("count3 is :%d\n",c3);

	return 0;
}



