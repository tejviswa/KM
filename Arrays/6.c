/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 18-10-2024
* Program: Write a function to search for a specific element given by the user, in an array and display its index.  Function takes array and element to search as inputs, and returns the index as output. If element not found, return -1.
* Sample Input :
* Sample output :
Enter size of array
2
Enter array elements
1
4
Enter the element you want to search
4
Index of the number is 1

Enter size of array
3
Enter array elements
5
7
6
Enter the element you want to search
2
Index of the number is -1

*
*/


#include<stdio.h>
int check(int arr[],int num,int size);
int main()
{
	
	int size,i,c,num,ret;                                                   //declaring inputs
	printf("Enter size of array\n");
	ret=scanf("%d",&size);                                                    //reading size of array
	while(ret!=1)                                                                 //error handling
	{
		printf("Enter size correctly\n");
		while(getchar()!='\n');
		ret=scanf("%d",&size);                                                   //reading size again
	}

	int arr[size];                                                        //decalring array of size
	printf("Enter array elements\n");
	for(i=0;i<size;i++)
	{
		ret=scanf("%d",&arr[i]);                                             //reading array elements

 		while(ret!=1)                                                       //error handling
        {
            printf("Enter number correctly");
            while(getchar()!='\n');
            ret=scanf("%d",&arr[i]);                                            //reading element again
        }


	}
	printf("Enter the element you want to search\n");
	ret=scanf("%d",&num);
	while(ret!=1)                                                                 //error handling
	{
		printf("Enter number  correctly\n");
		while(getchar()!='\n');
		ret=scanf("%d",&num);                                                   //reading size again
	}

	c=check(arr,num,size);                                                   //function call
	printf("Index of the number is %d\n",c);
	return 0;
}


/*
 *  @brief  : This function is used to find the given element is in the array or not
 *  @note   : comparing the given element with the array of elements
 *  @Param1 : int
 *	@Param2 : int
 *	@Param3 : int
 *	@retval : int - compare num with arr[]
 */






int check(int arr[],int num,int size)
{
	int i;                                 
	for(i=0;i<size;i++)	
	{
		if(num==arr[i])                              //checking condition if the num is in the array or not
			return i;                                //if present returning its index number
	}
	return -1;                                      //if not present returning -1
}



