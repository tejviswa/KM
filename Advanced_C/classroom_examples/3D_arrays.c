/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 10-12-2024
* Program: 
* Sample Input :
* Sample output :
*
*/

#include<stdio.h>

void fun(int arr[3][4][2])
{
	int i,j,k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			for(k=0;k<2;k++)
			{
				arr[i][j][k]=10*arr[i][j][k];
				printf("%4d",arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}




#include<stdio.h>
int main()
{
	int arr[3][4][2]={1,2,3,4,5,6,7,8,9,10};

	fun(arr);
	
	//printf(" \n");
	//scanf(" ", );

	return 0;
}

