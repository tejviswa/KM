/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 17-01-2025
* Program:  Define a generic function, for different types of array printing , by taking array and array size as arguments.
* Sample Input :
* Sample output :
Enter size of an array
3
Select the data type
 1.int
 2.float
 3.char
3
Enter the elemets of array
a
s
d
Output: a s d

Enter size of an array
3
Select the data type
 1.int
 2.float
 3.char
2
Enter the elemets of array
2.4
5.6
3.8
Output: 2.40 5.60 3.80

*/


#include<stdio.h>

#define ARR_PRINT(s,dtype,arr)  printf("Output:");\
								for(i=0;i<s;i++)\
								  printf(" %"#dtype ,arr[i]);\
								  printf("\n");


int main()
{
	int s,i,d;
	printf("Enter size of an array\n");
	scanf("%d",&s);
	
	printf("Select the data type\n 1.int\n 2.float\n 3.char\n");
	scanf("%d",&d);
 int arr[s];
float arr2[s];
char arr3[s]; 

	switch(d)
	{
		case 1:printf("Enter the elemets of array\n");
			   for(i=0;i<s;i++)
			   {
				   scanf("%d",&arr[i]);
			   }
			   ARR_PRINT(s,d,arr);break;
		case 2:printf("Enter the elemets of array\n");
			   for(i=0;i<s;i++)
			   {
				   scanf("%f",&arr2[i]);
			   }   
			   ARR_PRINT(s,.2f,arr2);break;
		case 3:printf("Enter the elemets of array\n");
			   while(getchar()!='\n');
			   for(i=0;i<s;i++)
			   {
				   scanf("%c",&arr3[i]);
				   while(getchar()!='\n');
			   }   
			   ARR_PRINT(s,c,arr3);break;
	}


	return 0;
}

