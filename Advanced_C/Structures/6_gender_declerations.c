/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 21-01-2025
* Program: Count and print how many girls and how many boys there are in the class.
* * Sample Input :
* Sample output :
Enter student1 gender(M/F):M
Enter student2 gender(M/F):F
Enter student3 gender(M/F):m
Enter student4 gender(M/F):f
Boys:2
Girls:2
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



int main()
{
	int i,m=0,f=0;
	for(i=0;i<4;i++)
	{
		printf("Enter student%d gender(M/F):",i+1);
		//while(getchar()!='\n');
		scanf("%c",&s[i].gender);
		while(getchar()!='\n');
	}

	for(i=0;i<4;i++)
    {
        if(s[i].gender == 'm' || s[i].gender == 'M')
            m++;
        else if(s[i].gender == 'f' || s[i].gender == 'F')
            f++;
	}

	printf("Boys:%d\nGirls:%d\n",m,f);
	return 0;
}

