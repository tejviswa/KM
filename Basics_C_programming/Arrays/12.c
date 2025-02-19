/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 18-10-2024
* Program: Write an neg_to_pos function to modify the array such that all negative numbers are converted to positive.

void neg_to_pos ( int arr[] , int n); 
* Sample Input :
* Sample output :
Enter size of array elements:3
Enter the array elements
-8
-8
-6
Output
8 8 6 
*
*/


#include<stdio.h>
void neg_to_pos ( int arr[] , int n);
int main()
{
	int n,ret,i;                                                                                 //declaring inputs
	printf("Enter size of array elements:");
	ret=scanf("%d",&n);                                                                  //reading inputs
	while(ret!=1)																		//error handling
	{
		printf("Enter size correctly\n");													//printig error message
		while(getchar()!='\n');
		ret=scanf("%d",&n);																//reading input again
	}

	int arr[n];																			//decalring an array with size n
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)																		
	{
		ret=scanf("%d",&arr[i]);														//reading array of elements

		while(ret!=1)																		//error handling
		{
			printf("Enter number correctly");
			while(getchar()!='\n');
			ret=scanf("%d",&arr[i]);														//reading inputs again
		}


	}

	neg_to_pos(arr,n);																			//function call

	return 0;
}

/*
 *  @brief  : This function is used to convert the negative numbers to positive 
 *  @note   : multiplying the number with -1
 *  @Param1 : int
 *	@Param2 : int
 *	@retval : int *-1 with negative numbers 
 */

void neg_to_pos(int arr[],int n)
{
	int i;   											//declaring inputs

	printf("Output\n");

	for(i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			printf("%d ",arr[i]*-1);                          //checking for negative numbers and printing them with  *-1
		}
		else
			printf("%d ",arr[i]);                               //printing as it is if its positive  number
	}
	printf("\n");
				
}

