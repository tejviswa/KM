
/*
 *  @brief  : This function is used to swap the elements of an array 
 *  @note   : swaping using an temporary variable
 *  @Param1 : int
 *  @retval : void no return value
 */

#include<stdio.h>
void swap(int a[])
{
	int t;
	t=a[0];
	a[0]=a[1];
	a[1]=t;
}

