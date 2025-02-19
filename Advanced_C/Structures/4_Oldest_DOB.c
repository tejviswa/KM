/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 20-01-2025
* Program:  write a function to take the array of structures as arguments and return the structure element with the oldest date of birth.
    return the structure variable using return statement and array element with index. Return type of the function will be struct student.

* Sample Input :
* Sample output :
Enter student1 ID:4
Enter DOB of student1: 16-06-2001
Enter student2 ID:5
Enter DOB of student2: 08-11-1999
Enter student3 ID:6
Enter DOB of student3: 09-04-2000
Student with ID:5 is Older

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

int c;

struct student older(struct student s[])
{
	int i,older;
	s[3]=s[0];
	for(i=0;i<2;i++)
	{
		if(s[3].y < s[i+1].y)
			s[3]=s[3];
		else if(s[3].y > s[i+1].y)
			s[3]= s[i+1];
		else
		{
			if(s[3].m < s[i+1].m)
				s[3]=s[3];
			else if(s[3].m > s[i+1].m)
				s[3]=s[i+1];
			else
			{
				if(s[3].d < s[i+1].d)
					s[3]=s[3];
				else if(s[3].d > s[i+1].d)
					s[3]=s[i+1];
				else
					c++;
			}

		}
	}
	return s[3];
}


int main()
{
	int i;

	for(i=0;i<3;i++)
	{
		printf("Enter student%d ID:",i+1);
		scanf("%d",&s[i].ID);
		printf("Enter DOB of student%d: ",i+1);
		scanf("%d-%d-%d",&s[i].d,&s[i].m,&s[i].y);
		while(getchar()!='\n');
	}
	s[3]=older(s);
	if(c==2)
		printf("All are of equal age\n");
	else
		printf("Student with ID:%d is Older\n",s[3].ID);
	return 0;
}

