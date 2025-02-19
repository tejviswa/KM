/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 10-12-2024
* Program: Declare a two-dimensional array of elements for sales details of a store, for each item, for each salesman. Take the sales values as input and print the array in matrix form.
Find out and print the following :
1 ) Total sales by each sales man
2 ) Total sales for a item
3 ) Total sales
* Sample Input 
2
3
4
1
6
6
2
6
4

* Sample output :
Total sales by salesman 1 is :9
Total sales by salesman 2 is :13
Total sales by salesman 3 is :12
Total sales of item 0 is :5
Total sales of item 1 is :15
Total sales of item 2 is :14
Total sales of store is 34

*
*/

#define ROW 3
#define COL 3

#include<stdio.h>
int main()
{
	int mat[ROW][COL];
	int i,j,k,n=0,sales=0;
	int a1[20],a2[20];
	int items=0,salesman=0;

	
//READING MATRIX INPUTS
	
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}


// TOTAL SALES BY EACH SALES MAN
	
	k=1;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			salesman += mat[i][j];

		}

		a1[i]=salesman;
		
		printf("Total sales by salesman %d is :%d\n",k,salesman);
		salesman=0;
		k++;
	}

/*	n=1;

	for(i=0;i<ROW;i++)
	{
		printf("Total sales by salesman %d is :%d\n",n,a1[i]);
	n++;
	}

*/
	
// TOTAL SALES OF EACH ITEM
	
	k=1;
	for(i=0;i<COL;i++)
	{
		for(j=0;j<ROW;j++)
		{
			items += mat[j][i];
		}
		printf("Total sales of item %d is :%d\n",k,items);
		items=0;
		k++;
	}
/*
	n=1;
	for(i=0;i<ROW;i++)
	{
		printf("Total sales of item %d is :%d\n",n,a2[i]);
	n++;
	}

*/

//TOTAL SALES OF STORE
	
	for(i=0;i<ROW;i++)
	{
		sales+=a1[i];
	}
	printf("Total sales of store is : %d\n",sales);

		

	return 0;
}

