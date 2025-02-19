/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 18-10-2024
* Program: write an compare function to take 2 arrays as input and return 1 if they are equal and 0 if they are not equal ( sizes to be sent as separate arguments)

int compare(int arr1[],int m,int arr2[],int n)
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
int compare(int arr1[],int m,int arr2[],int n);
int main()
{
	int n,i,ret,m,r;                                                            //decalring inputs
	printf("Enter size of array1:");
	ret=scanf("%d",&m);                                                          //reading size of array1
	while(ret!=1)                                                          //error hadling
	{
		printf("Enter size correctly\n");                                       //printig error message
		while(getchar()!='\n');
		ret=scanf("%d",&m);                                                      //reaading value again
	}   


	int arr1[m];                                                                 //decalring array 1
	printf("Enter the array1 elements\n"); 
	for(i=0;i<m;i++)                                
	{
		scanf("%d",&arr1[i]);                                                   //reading elements of array 1

		 while(ret!=1)                                                            //error handling
        {
            printf("Enter number correctly");                                    //printing   error message
            while(getchar()!='\n');                                                          
            ret=scanf("%d",&arr1[i]);                                               //reading value again
        }
	}



	printf("Enter size of array2:");
	scanf("%d",&n);                                                             //reading size of array 2
	while(ret!=1)                                                                  //error handling
	{
		printf("Enter size correctly\n");                                               //printig error message
		while(getchar()!='\n');                                     
		ret=scanf("%d",&n);                                                          //reading value again
	}


	int arr2[n];
	printf("Enter the array2 elements\n");
	for(i=0;i<n;i++)
	{
		ret=scanf("%d",&arr2[i]);                                                      //reading array2 elements
 		while(ret!=1)                                                               //error handling
        {
            printf("Enter number correctly");                                        //printig error message
            while(getchar()!='\n');
            ret=scanf("%d",&arr2[i]);                                                //reading vaule again
        }
	}

	r=compare(arr1,m,arr2,n);                                                    //compare function call
	if(r==1)                                                                     //checking return value 1 or not 
		printf("Equal\n");                                                         //if 1 prinitg equal else not equal
	else 
		printf("Not equal\n");

	return 0;
}




/*
 *  @brief  : This function is used to compare the elements of two arrays
 *  @note   : taking a count value and incrementing each time when both the elements of arrays are equal
 *  @Param1 : int
 *	@Param2 : int
 *	@Param3 : int
 *	@retval : int - comparision of arr1[] and arr2[]
 */


 
int compare(int arr1[],int m,int arr2[],int n)
{
	int i,j,e=0;                                                                        //declaring inputs
	if(m==n)                                                                     //checking for the size of both the arrays are equal or not
	{
		for(i=0,j=0;i<m,j<n;i++,j++)                                              //comparing the elemnets of both arrays
		{
			if(arr1[i]==arr2[j])                                               //incrementing temp variable each time count if both are equal
				e++;
			else 
				return 0;
		}
		if(e==m)                         //finally checking if the count vaule equals the size means both the elemnts in the array are equal
			return 1;
	}
	else
		return 0;
}








