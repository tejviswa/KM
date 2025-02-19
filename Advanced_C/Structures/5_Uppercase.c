/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 21-01-2025
* Program: Write a function to take an array of structures as arguments, and convert all their names into capital letters( strupr implementation). print the data in the main function.
* Sample Input :
* Sample output :
Enter student1 ID:4
Enter student name:tejo
Enter student2 ID:5
Enter student name:siva
Enter student3 ID:45
Enter student name:rakesh
Enter student4 ID:11
Enter student name:nikhil
TEJO
SIVA
RAKESH
NIKHIL
*
*/


#include<stdio.h>
struct student
{
	int ID;
	char name[20];
	int marks[6];
	int d,m,y;
	float per;
	char gender;
}s[4];


void upper(struct student s[])
{
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;s[i].name[j]!='\0';j++)
		{
		if(!(s[i].name[j] >= 'A' && s[i].name[j] <= 'Z'))
			s[i].name[j]-=32;
		}
	}
}

int main()
{
	int i;
	for(i=0;i<4;i++)
	{
		printf("Enter student%d ID:",i+1);
		scanf("%d",&s[i].ID);
		printf("Enter student name:");
		getchar();
		scanf("%[^\n]s",s[i].name);

	}

	upper(s);

	for(i=0;i<4;i++)
	{
		printf("%s\n",s[i].name);
	}


	return 0;
}

