/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 18-10-2024
* Program: Write an average function to return the average of marks of all students in a class. 

float average( int arr[] , int n, int s); 
arr[] contains the number of subjects.
Where 'n' is the number of students and 's' is the number of subjects. 

* Sample Input :
* Sample output :
*
*/


#include<stdio.h>

float average(int arr[],int s);
int main()
{
	int s,n,i,j=0,k=1,l,ret;
	float avg,s2;
	
	printf("Enter number of students :");
	scanf("%d",&n);
	printf("Enter number of subjects :");
	scanf("%d",&s);
	int arr[s];
	s2=0;
	s1=0;
	


	for(i=0;i<n;i++)
	{
		printf("Enter marks of student %d\n",k);
		l=1;
		s1=s+s1;
		for(;j<s1;j++)
		{
			printf("Sub %d:",l);
			scanf("%d",&arr[j]);
			l++;                           //for subject ID
		}
	

		avg=average(arr,s,n);
		s2=s2+avg;

		
		k++;                   //for student ID
	}
	
	printf("Average of class  is %.2f\n",s2/n);
	return 0;
}

	



float average(int arr[],int s,int n)
{
	int i,sum;
	float avg;
	sum=0;
	s1=0;
	for(i=0;i<n;i++)
	{
		s1=s+s1;
		for(j=0;j<s1;j++)
		{
			sum=sum+arr[j];

		}

		avg=(float)(sum/s);
		printf("Average of student %d",i);
	}

	return avg;
}



/*

	
	for(i=0;i<n;i++)
	{
	//	printf("Enter marks of student %d",k);
		
		for(j=0;j<s;j++)
		{
			printf(" %d",arr[j]);
			
		}
	}
*/
	


