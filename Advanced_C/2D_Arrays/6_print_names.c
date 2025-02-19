/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 12-12-2024
* Program: Declare a two dimensional array of characters, read names from the user and print the names in character format(%c)
* Sample Input :
* Sample output :
tejo 
rakesh
siva
nikhil
   t   e   j   o   
   r   a   k   e   s   h   
   s   i   v   a   
   n   i   k   h   i   l   
*
*/

#define ROW 4
#define COL 10


#include<stdio.h>
int main()
{
	int i,j;
	char arr[ROW][COL];                       //declaring 2D array of fixed columns and variable rows depends on how many names you want to give. 
	printf("Enter strings\n");   
	for(i=0;i<ROW;i++)                //reading the inputs based on the no of string you want to give i.e ROWS
	{
		scanf("%[^\n]s",arr[i]);
		getchar();
	}
								//now the names are stored as a matrix form.
	for(i=0;i<ROW;i++)        
	{
		for(j=0;j<COL;j++)              
		{
			printf("%4c",arr[i][j]);   //printing all the characters in a matrix.
			if(arr[i][j]=='\0')       //if it reaches to null then break.
				break;
		}
		printf("\n");
	}
	return 0;
}

