/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 11-12-2024
* Program:Write the following program :
Declare a two dimensional array of elements and find and print its transpose.
eg., if the matrix is :       1 3
                              4 5
                              7 8

its transpose should be :     1 4 7
                              3 5 8
*
*/

#define ROW 3
#define COL 2

#include<stdio.h>
int main()
{
	int mat[ROW][COL];
	int i,j;
   
//READING MATRIX INPUTS
    
    for(i=0;i<ROW;i++) 
    {
        for(j=0;j<COL;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

   
//PRINTING TRANSPOSE OF MATRIX
    
    for(i=0;i<COL;i++)               //interchanging rows with columns
    {
        for(j=0;j<ROW;j++)           //for transpose
        {
            printf("%4d",mat[j][i]);        //interchanging in the matrix too 
        }
		printf("\n");
    }



	return 0;
}

