/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 17-10-2024
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
int main()
{
	int i,ret,t,in,b,s,j=1;                                            //declaring inputs
	int a[10];                                                          //declaring array
	printf("Enter 10 array elements\n");
	for(i=0;i<10;i++)                                                 
	{
		printf("Enter array element %d: ",j);
		ret=scanf("%d",&a[i]);                                       //reading array elements

 		while(ret!=1)
        {
            printf("Enter number correctly");
            while(getchar()!='\n');
            ret=scanf("%d",&a[i]);
        }

//=================finding biggest element==================
		if(i==0)
			t=a[i];                                                       //moving the 1st element to temp varaible
		else
		{
			if(t<a[i])                                        //if element is bigger than previous element then storing the element in temp
			{
				t=a[i];
				in=i;                                          //and storing its index value
			}
		}
		j++;   
	}


	printf("\nArray elements are  {");
	for(i=0;i<10;i++)
	{
		printf("%d,",a[i]);                                                             //printing array elements
	}
	printf("\b");
	printf("}\n");
	
	
	printf("\nBiggest array element is %d & index is %d\n",t,in);                  //printing the biggest element of an array with its index
	
	
//==========for smallest number==============
	s=a[0];                                                                           //initializing the 1st element to temp variable s
	in=0;                                                                            //index is initialized with 0 for 1st element
	for(i=0;i<10;i++)
	{
		if(s>a[i])                                                               //comparing the elements of the array for the smallest element
		{
			s=a[i];                                                      //if the element is small than previous one then moving the value to s
			in=i;                                                               //and moving the index vaule of that element
		}
	}
	printf("Smallest array element is %d & index is %d\n",s,in);                          //printing the smallest element with its index

	return 0;
}

