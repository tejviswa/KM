/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 11-12-2024
* Program: Multiplication of MATRICES
* Sample Input :
* Sample output :
* 2
3
4
5
1
2
3
4
Multiplaction of matrices
  11  16
  19  28

*
*/


#define ROW1 2
#define COL1 2
#define ROW2 COL1
#define COL2 2

#include<stdio.h>
int main()
{
	int i,j,k;
	int mat1[ROW1][COL1],mat2[ROW2][COL2],mat3[ROW1][COL2];
	

	for(i=0;i<ROW1;i++)
	{
		for(j=0;j<COL1;j++)
		{ 
			scanf("%d",&mat1[i][j]); 
		}
	}

	for(i=0;i<ROW2;i++)
	{
		for(j=0;j<COL2;j++)
		{

			scanf("%d",&mat2[i][j]);
		}

	}

	//MULTIPLICATION
	
  for(i=0;i<ROW1;i++)
    {
        for(j=0;j<COL2;j++)
        {
			mat3[i][j]=0;

			for(k=0;k<COL1;k++)
			{
				mat3[i][j] += mat1[i][k] * mat2[k][j];
			}
        }

    }

  printf("Multiplaction of matrices\n");
  // PRINTING RESULT MATRIX

	for(i=0;i<ROW1;i++)
	{
		for(j=0;j<COL2;j++)
		{
			printf("%4d",mat3[i][j]);
		}
		printf("\n");
	}

	return 0;
}

