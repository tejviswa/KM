/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 20-01-2025
* *
*/


#include<stdio.h>


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
	struct student s;

	printf("Enter student ID:");scanf("%d",&s.ID);getchar();
	printf("Enter name:\n");scanf("%[^\n]s",s.name);
	printf("Enter D.O.B\n");scanf("%d-%d-%d",&s.d,&s.m,&s.y);
	getchar();
	printf("Enter gender m/f\n");scanf("%c",&s.gender);

	percentage(s.marks);
	print(s);

	return 0;
}

