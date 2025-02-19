/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 18-10-2024
* Program:  write a function to take an array as input, and count how many times the biggest number is repeated in that array, and return the count.

eg., array : {10, 14,16,10, 10 , 16, 14, 14, 16, 16};
output : biggest number is repeated 4 times
* 
* Sample Input :
* Sample output :

Enter size of array
5
Enter array element 1: 4
Enter array element 2: 4
Enter array element 3: 4
Enter array element 4: 4
Enter array element 5: 2
array={4,4,4,4,2}
Biggest number is 4 repeated 4 times

*
*/


#include<stdio.h>
int main()
{
	int i,ret,j=1,t,b=0,s;                                                                      //declaring inputs
	printf("Enter size of array\n");                                 
	ret=scanf("%d",&s);                                                                 	//reading the size of array
	while(ret!=1)
	{
		printf("Enter size correctly\n");
		while(getchar()!='\n');
		ret=scanf("%d",&s);
	}
	int a[s];                                                                        //decalring array with size s
	for(i=0;i<s;i++)                                                               //loop for reading all the elements of an array
	{
		printf("Enter array element %d: ",j);                         
		ret=scanf("%d",&a[i]);                                                            //reading array elemnts
		while(ret!=1)
		{
			printf("Enter number correctly");
			while(getchar()!='\n');
			ret=scanf("%d",&a[i]);
		}
//============finding biggest element=============
		if(i==0)                                                                //storing the 1st array element in temp variable t  
			t=a[i];                                                          
		else
		{
			if(t<a[i])                                                          //comparing the elements with previous elements 
			{
				t=a[i];                           //if the element is big then storing the element in t and comparing it with the next element
			}
		}
		j++;                                        
	}
//============counting the biggest element in array=======
	for(i=0;i<s;i++)                                                //checking if the biggest number is in the array or not
	{
		if(t==a[i])                                                //every time the value detected in the array then incrementing b value        
			b++;
	}

//=========printing array of elements=============
	
	printf("array={");                                                                     
	for(i=0;i<s;i++)                                             //printing the array of elements
	{
		printf("%d,",a[i]);
	}
	printf("\b}\n");

	printf("Biggest number is %d repeated %d times\n",t,b);                      //printing the result

	return 0;
}

