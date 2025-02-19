/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 13-02-2025
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
#include<string.h>



int main()
{
	char *units[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

	char *tens_1[10] = {"ten","eleven","tweleve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","ninteen"};

	char *tens_2[10] = {"","","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};

	int i=0,j=0,temp=0,num,count=0;

	int int_arr[10];

	printf("Enter a integer:");

	scanf("%d",&num);



	while(num)
	{
		int_arr[count++] =  num%10;
		num = num / 10;
	}

	for(i=count-1;i>=0;i--)
	{
		if(i == 3)
		{
			printf("%s thousand ", units[int_arr[i]]);
		}

		else if(i == 2 && int_arr[i] > 0)
		{
			printf("%s hundred ", units[int_arr[i]]);
		}

		else if(i == 1)
		{
			if((int_arr[i] == 1))
			{
				printf("%s ",tens_1[int_arr[0]]);
				break;

			}
			else if(int_arr[i]>1)
			{
				printf("%s ",tens_2[int_arr[i]]);
			}
		}
		else if(i == 0 && int_arr[i] > 0)
		{
			printf("%s ",units[int_arr[i]]);
		}
	}

	printf("\n");
	return 0;

}

