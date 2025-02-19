/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 18-10-2024
* Program: Write the following program.
Declare an integer variable ‘size’.
Take the value of ‘size’ from user using scanf.
Declare an array of any datatype, and give the integer variable ‘size’, in place of size of the array  and initialize it to some values.(syntax: float array[size] = {1.0,2.5};)
Using for loop, try to take user input using scanf. Loop should execute ‘size’ number of times.
Using for loop, print the elements of the array.
* Sample Input :
* Sample output :
* 
Enter size of array
3
Enter array elements
4
5
8
output:
4.00 5.00 8.00

*
*/


#include<stdio.h>
int main()
{
	int size,ret,i;                                                     //decalaring the inputs
	printf("Enter size of array\n");
	ret=scanf("%d",&size);                                                //reading the size of an array
	while(ret!=1)                                                         //error handling
	{
		printf("Enter size correctly\n");
		while(getchar()!='\n');          
		ret=scanf("%d",&size);                                         //reading size again
	}


	float arr[size];                                                      //declaring array with given size
	printf("Enter array elements\n");
	for(i=0;i<size;i++)
	{
		ret=scanf("%f",&arr[i]);                                      //reading elements of an array
		while(ret!=1)                                                     //error handling
        {
            printf("Enter number correctly");
            while(getchar()!='\n');
            ret=scanf("%f",&arr[i]);                                        //reading elements again
        }


	}
	for(i=0;i<size;i++)
	{
		printf("%.2f ",arr[i]);                                     //printing array of elements
	}
	printf("\n");



	return 0;
}

