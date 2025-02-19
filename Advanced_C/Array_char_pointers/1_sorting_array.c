/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 22-01-2025
* Program: Create a character pointer array, initialise the pointers to read only strings. Sort the array and print.
* Sample Input :
* Sample output :
*Ascending Order:
Wednesday  Tuesday  Thursday  Sunday  Saturday  Monday  Friday

Descending Order:
Friday  Monday  Saturday  Sunday  Thursday  Tuesday  Wednesday 
*/


#include<stdio.h>
#include<string.h>

int main()
{
	int i,j;
	char *weeks[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	char *temp;
	
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
			if(strcmp(weeks[i],weeks[j])<0)   //less_than(<0) Ascending, (>0) Descending 
			{
				temp     = weeks[j];
				weeks[j] = weeks[i];
				weeks[i] = temp;
			}
		}
	}

	for(i=0;i<7;i++)
	{
		printf("%s  ",weeks[i]);
	}

	return 0;
}

