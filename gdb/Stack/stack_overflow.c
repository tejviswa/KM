/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 24-12-2024
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
void func1();
void func2();
void func3();


int y=0;

int main()
{
	int x=0;
	func1();
	
	return 0;
}
void func3()
{
    int x=3;
	y++;
    printf("%d count:%d\n",x,y);
    main();
}

void func2()
{
    int x=2;
    func3();
}

void func1()
{
    int x=1;
    func2();
}


