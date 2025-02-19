/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 20-01-2025
* Program: Practice scanf and printf on each member of the structure using a structure variable using the below structure template:

struct student
{
int ID;
char name[50];
int marks[6];
int d,m,y;
float per;
char gender
};

create a structure variable of the above type and read ID , name and marks of 6 subjects, date of birth and date of joining using scanf and printf.
Then calculate the percentage of marks, and store the percentage using per pointer member, and print it.Write a function to calculate the percentage ,and update the percentage member of the structure using function (send only per member using call by reference).
====================
Sample Input :
===================
Enter student ID:4
Enter name:
Tejo
Enter Sub1 marks:87
Enter Sub2 marks:98
Enter Sub3 marks:87
Enter Sub4 marks:65
Enter Sub5 marks:54
Enter Sub6 marks:58
Enter D.O.B
8-11-1999
Enter gender m/f
M
=================
Sample output :
===================
Student ID:4
Name:Tejo
D.O.B:8-11-1999
Percentage:74.00
Gender:Male
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
}s;

void percentage(int marks[])
{
	int temp=0,i;
	for(i=0;i<6;i++)
	{
		temp=temp+marks[i];
	}
	s.per=temp/6;
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
	int i; 
	printf("Enter student ID:");scanf("%d",&s.ID);getchar();
	printf("Enter name:\n");scanf("%[^\n]s",s.name);
	for(i=0;i<6;i++)
	{
		printf("Enter Sub%d marks:",i+1);
		scanf("%d",&s.marks[i]);
	}
	printf("Enter D.O.B\n");scanf("%d-%d-%d",&s.d,&s.m,&s.y);
	getchar();
	printf("Enter gender m/f\n");scanf("%c",&s.gender);

	percentage(s.marks);
	print(s);

	return 0;
}

