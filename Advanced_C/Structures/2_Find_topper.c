/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 20-01-2025
* Program:Create an array of structures using the above template. read the data for all elements of the array. and print the topper name with the highest percentage. 
Sample output:
Enter student1 ID:4
Enter name:
tej
Enter Sub1 marks:54
Enter Sub2 marks:54
Enter Sub3 marks:54
Enter Sub4 marks:54
Enter Sub5 marks:54
Enter Sub6 marks:54
Enter D.O.B
87-87-98
Enter gender m/f
m
Student1 percentage:54.00
Enter student2 ID:5
Enter name:
gfd
Enter Sub1 marks:65
Enter Sub2 marks:98
Enter Sub3 marks:87
Enter Sub4 marks:32
Enter Sub5 marks:54
Enter Sub6 marks:65
Enter D.O.B
87-98-98
Enter gender m/f
f
Student2 percentage:66.00
Enter student3 ID:6
Enter name:
tref
Enter Sub1 marks:21
Enter Sub2 marks:21
Enter Sub3 marks:41
Enter Sub4 marks:41
Enter Sub5 marks:41
Enter Sub6 marks:4
Enter D.O.B
78-69-89
Enter gender m/f
m
Student3 percentage:28.00
Student with ID:5 is topper
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
void percentage(int marks[],int j)
{
	int temp=0,i;
	for(i=0;i<6;i++)
	{
		temp=temp+marks[i];
	}
	s[j].per=temp/6;
	printf("Student%d percentage:%.2f\n",j+1,s[j].per);
	
}



void print(struct student s)
{
	printf("Student ID:%d\nName:%s\nD.O.B:%d-%d-%d\nPercentage:%.2f\n",s.ID,s.name,s.d,s.m,s.y,s.per);
	if(s.gender=='m'||s.gender=='M')
		printf("Gender:Male\n");
	else
		printf("Gender:Female\n");

}


int main()
{
	int i,k,temp; 
	for(i=0;i<3;i++)
	{
		printf("Enter student%d ID:",i+1);scanf("%d",&s[i].ID);
		getchar();                                                  //clearing buffer
		printf("Enter name:\n");scanf("%[^\n]s",s[i].name);

		for(k=0;k<6;k++)
		{
			printf("Enter Sub%d marks:",k+1);
			scanf("%d",&s[i].marks[k]);
		}
		printf("Enter D.O.B\n");scanf("%d-%d-%d",&s[i].d,&s[i].m,&s[i].y);
		getchar();                                                        //clearing buffer
		printf("Enter gender m/f\n");scanf("%c",&s[i].gender);

		percentage(s[i].marks,i);
	}
	//print(s);
	for(i=0;i<2;i++)             //total students are 3 but at last iteration there is no student 4 so for comparing for n students we should check for n-1 iterations.
	{
		if(s[i].per > s[i+1].per)
			temp=i;
	}
	printf("Student with ID:%d is topper\n",s[temp].ID);

	return 0;
}

