/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 11-12-2024
* Program: Addition and Subtraction of Matrices
* Sample output :
2
4
5
7
8
6
4
2
Addition of matrices
  10  10
   9   9
Subtraction of matrices
  -6  -2
   1   5

*
*/

#define ROW 2
#define COL 2
#include<stdio.h>
int main()
{
	int mat1[ROW][COL],mat2[ROW][COL],mat3[ROW][COL],mat4[ROW][COL];
	int i,j,k;

	for(k=0;k<2;k++)
	{
		for(i=0;i<ROW;i++)
		{
			for(j=0;j<COL;j++)
			{
				if(k==0)
					scanf("%d",&mat1[i][j]);
				if(k==1)
					scanf("%d",&mat2[i][j]);
			}

		}
	}


	//MATRIX ADDITION & SUBTRACTION
	
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			mat3[i][j] = mat1[i][j] + mat2[i][j];         //ADDITION OF TWO MATRICES
			mat4[i][j] = mat1[i][j] - mat2[i][j];    //SUBTRACTION OF TWO MATRICES
		}
	}

	//PRINTING FINAL MATRICES
	//
	for(k=0;k<2;k++)
	{
		if(k==0)
			printf("Addition of matrices\n");
		else
			printf("Subtraction of matrices\n");
		for(i=0;i<ROW;i++)
		{
			for(j=0;j<COL;j++)
			{
				if(k==0)
					printf("%4d",mat3[i][j]);
				if(k==1)
					printf("%4d",mat4[i][j]);
			}
			printf("\n");
		}
	}

	return 0;
}

