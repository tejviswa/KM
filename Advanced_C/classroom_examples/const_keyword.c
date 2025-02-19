/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 17-01-2025
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>

#if 0
int main()
{
	int x=10,y=5;
	int *ptr =&x;
	*ptr=12;
	ptr=&y;
	*ptr=15;
	printf("X:%d ,Y:%d , *ptr:%d\n",x,y,*ptr);
	

	return 0;
}

#endif
/*
Output:
	X:12 ,Y:5 , *ptr:12
*/

#if 0
int main()
{
	int x=10,y=5;
	const int *ptr =&x;
	*ptr=12;
	ptr=&y;
	*ptr=15;
	printf("X:%d ,Y:%d , *ptr:%d\n",x,y,*ptr);
	

	return 0;
}
#endif

/*
Output:
const.c:36:6: error: assignment of read-only location ‘*ptr’
  *ptr=12;
      ^
const.c:38:6: error: assignment of read-only location ‘*ptr’
  *ptr=15;
      ^
 * */


#if 0
int main()
{
	int x=10,y=5;
	const int *ptr =&x;
	(*ptr)++;
	++*ptr;
	printf("X:%d ,Y:%d , *ptr:%d\n",x,y,*ptr);
	

	return 0;
}

#endif

/*
Output:
 const.c:53:8: error: increment of read-only location ‘*ptr’
  (*ptr)++;
        ^~
const.c:54:2: error: increment of read-only location ‘*ptr’
  ++*ptr;
  ^~
*/



#if 0
int main()
{
	int x=10,y=5;
	int *const ptr=&x;
	ptr=&y;
	*ptr=13;
	printf("X:%d ,Y:%d , *ptr:%d\n",x,y,*ptr);
	

	return 0;
}

#endif
/*
 Ouput:
  const.c:71:5: error: assignment of read-only variable ‘ptr’
  ptr=&y;

 * */



#if 0
int main()
{
	int x=10,y=5;
	int *const ptr=&x;
	*ptr=120;
	ptr++;
	y=*ptr++;
	y=++*ptr;
	y=*++ptr;
	*ptr=13;
	printf("X:%d ,Y:%d , *ptr:%d\n",x,y,*ptr);
	

	return 0;
}

#endif
/*
Output:
 const.c:116:5: error: increment of read-only variable ‘ptr’
  ptr++;
     ^~
const.c:117:8: error: increment of read-only variable ‘ptr’
  y=*ptr++;
        ^~
const.c:119:5: error: increment of read-only variable ‘ptr’
  y=*++ptr;
     ^~
*/


#if 1
int main()
{
	int x=10,y=3;
	const int *const ptr;
	x=51;
	*ptr=15;
	ptr=&y;
	*ptr=10;

	return 0;

}
#endif


/*
Output:
const.c:148:6: error: assignment of read-only location ‘*ptr’
  *ptr=15;
      ^
const.c:149:5: error: assignment of read-only variable ‘ptr’
  ptr=&y;
     ^
const.c:150:6: error: assignment of read-only location ‘*ptr’
  *ptr=10;
      ^
*/





