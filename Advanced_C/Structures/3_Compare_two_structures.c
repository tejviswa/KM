/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 20-01-2025
* Program:  Write a function to compare 2 structures and return 1 if they are equal, and 0 if they are not equal.
* Sample Input :
* Sample output :
Enter student1 ID:4
Enter student2 ID:5
Not equal

*
*/


#include<stdio.h>
#include "student.h"

/*struct student
{
	int ID;
	char name[20];
	int marks[6];
	int d,m,y;
	float per;
	char gender;
}s[2];
*/
int compare(struct student s[])
{
	if(s[0].ID == s[1].ID)
	{
		return 1;
	}
	else
		return 0;
}

int main()
{
	int i,k;
	for(i=0;i<2;i++)
	{
		printf("Enter student%d ID:",i+1);scanf("%d",&s[i].ID);


/*		getchar();                                                  //clearing buffer
		printf("Enter name:\n");scanf("%[^\n]s",s[i].name);

		for(k=0;k<6;k++)
		{
			printf("Enter Sub%d marks:",k+1);
			scanf("%d",&s[i].marks[k]);
		}
		printf("Enter D.O.B\n");scanf("%d-%d-%d",&s[i].d,&s[i].m,&s[i].y);
		getchar();                                                        //clearing buffer
		printf("Enter gender m/f\n");scanf("%c",&s[i].gender);		

		*/
	}

		k=compare(s);
		if(k)
			printf("Equal\n");
		else
			printf("Not equal\n");
	return 0;
}



