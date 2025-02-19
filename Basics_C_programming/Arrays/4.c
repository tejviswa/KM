/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 18-10-2024
* Program: 
* Sample Input :
* Sample output :
*
*/

#if 0
#include<stdio.h>
int main()
{
	int n;
	int arr[10]={};                     //declaring array of size 10 with empty elements
	int i;
	printf("%lu\n",sizeof(arr));
	for(i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);                 //prints 10 0s
	}
	
	return 0;
}
#endif




#if 0
#include<stdio.h>
int main()
{
	int n;
	int arr[5]={2,4,5,6,7,3};                     //decalaring array of size 5 with elements 6
	int i;
	printf("%lu\n",sizeof(arr));                 //printing the elements
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);                 //gives warning during ccompilation of excess elements decleartion and prints only 5 elements
	}
	
	return 0;
}
#endif



#if 0
#include<stdio.h>
int main()
{
	int n;
	int arr[8]={2,4,5,6,7};                              //declaring array with size 8 with 5 elements
	int i;
	printf("%lu\n",sizeof(arr));                       //printing the size of array 32
	for(i=0;i<8;i++)
	{
		printf("%d\n",arr[i]);                      //prints declared 5 elements and then remianing 0s
	}
	
	return 0;
}
#endif


#if 0
#include<stdio.h>
int main()
{
	int arr[0]={};        //declaring the array with size 0
	int i;
	printf("%lu\n",sizeof(arr));         //prints size of array 0
	for(i=0;i<=0;i++)
	{
		printf("%d\n",arr[i]);          //prints garbage or nothing is printed
	}
	
	return 0;
}
#endif


#if 0
#include<stdio.h>
int main()
{
	int arr[0]={2,4,5,6,7};                  //declaring array with size 0 and and giving excess elements
	int i;
	printf("%lu\n",sizeof(arr));     //prints size of array 0
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);       //warning during compilation of excess elements decleration and  prints garbage
	}
	

	return 0;
}
#endif


#if 0
#include<stdio.h>
int main()
{
	int arr[]={};                   //declaring array of empty size and empty elements
	int i;
	printf("%lu\n",sizeof(arr));       //prints array size 0
	for(i=0;i<3;i++)
	{
		printf("%d\n",arr[i]);      //prints garbage
	}
	

	return 0;
}
#endif


#if 1
#include<stdio.h>
int main()
{
	char arr['a'];                    //declaring array  with size of chracter 'a'
	int i;
	printf("%lu\n",sizeof(arr));           //prints size 388(97*4)
	for(i=0;i<3;i++)
	{
		printf("%d\n",arr[i]);         //prints garbage values
	}
	

	return 0;
}
#endif


