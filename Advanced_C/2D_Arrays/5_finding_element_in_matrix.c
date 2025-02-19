/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 11-12-2024
* Program: 
* Sample Input :
* Sample output :
*
*/


#define ROW 3
#define COL 3

#include<stdio.h>

void search(int r, int c,int mat[r][c],int e,int *row,int *col)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(mat[i][j]==e)
			{
				*row =i;
				*col =j;
			}
		}
	}
}

int main()
{
	int mat[ROW][COL];
	int i,j,e,row,col;

	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	
	printf("Enter an element you want to search\n");
	scanf("%d",&e);
	search(ROW,COL,mat,e,&row,&col);
	printf("Row is %d,column is %d\n",row,col);

	return 0;
}

