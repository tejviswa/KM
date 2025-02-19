






#include<stdio.h>

#include"fun.h"

/*================================
    String lowercase converter
===================================
*/

char * my_strlwr(char *s)
{
    int i=0;                                        
    
    while(*(s+i)!='\0')                      
    {
        if(*(s+i)>='A'&& *(s+i)<='Z')                
        {
            *(s+i)=*(s+i)+32;             
        }
       i++;
    }
   return s; 
}
/*================================
    String length function
===================================
*/

int my_strlen(char *str)
{
	int i;
	for(i=0;*(str+i)!='\0';i++);
	return i;
}


/*================================
    String uppercase converter
===================================
*/

char * my_strupr(char *s)
{
    char *ch = s;                  
    
    while(*s!='\0')                       
    {
        if(*s>=97&&*s<=120)                
        {
			*s=*s-32;             
        }
        s++;
    }    
	return ch;

}


/*================================
    String reverse function
===================================
*/

char * my_strrev(char *s)
{
    int i,a,j,k;    
	char *ch=s;

    for(i=0;*(s+i)!='\0';i++);
    
    for(j=0,k=i-1;j<k;j++,k--)                             
    {
        a=*(s+j);
        *(s+j)=*(s+k);
        *(s+k)=a;
    }   
	return ch;
}


/*============================================
    String copy upto particular index
==============================================
*/


char *my_strncpy(char *d,char *s,int n)
{
    int i;
	char *ch=d;
    for(i=0;i<n;i++)
    {
        *d=*s;
		d++;
		s++;
    }
    *d='\0'; 

	return ch;
 
}

/*============================================================
    String copy(copying source string with destination string)
==============================================================
*/

char *my_strcpy( char *d, char *s)                  
{
    char *ch=d;                    
    
    while( *s !='\0')                 
    {
        *d = *s;                      
        d++;
		s++;
    }
    *d = '\0';

	return ch;
       
}


/*========================================
    String comparing returning 0 if equal
==========================================
*/


int my_strcmp(char *s1,char *s2)
{
	
	while(*s1 == *s2)
	{
		if(*s1=='\0')
			return 0;
		s1++;
		s2++;
	}
	return(*s1-*s2);  
}


/*================================
    String comparing insensitive
===================================
*/

int my_stricmp(char *s1,char *s2)
{
    int i,r;
    char str1[100],str2[100];

    my_strcpy(str1,s1);
    my_strcpy(str2,s2);
    my_strlwr(str1);
    my_strlwr(str2);
    r=my_strcmp(str1,str2);
	return r;

}

/*========================================
    String comparing  upto particular index  comparing returning 0 if equal
==========================================
*/


int my_strncmp(char *s1,char *s2,int n)
{
	n--;
    while(*s1 == *s2 )
    {
        if(*s1=='\0')
            return 0;
		else if(n==0)
			return 0;
        s1++;
        s2++;
		n--;
    }
    return(*s1-*s2);
}



/*================================
    String concatanation
===================================
*/
char *my_strcat(char *d, char *s)
{
    char *ch = d;
                         // Moving to the end of the destination string
    while (*d != '\0')
	{
        d++;
    }
    while (*s != '\0')
	{
        *d = *s;
        d++;
        s++;
    }

    *d = '\0';
    return ch;
}


/*=============================================
    String concatanation upto particular index
===============================================
*/

char *my_strncat(char *d, char *s,int n)
{
    char *ch = d;
                         // Moving to the end of the destination string
    while (*d != '\0')
    {
        d++;
    }
    while (n>0 && *s != '\0')
    {
        *d = *s;
        d++;
        s++;
		n--;
    }

    *d = '\0';
    return ch;
}


/*================================
    Finding index of character in a string 
===================================
*/

char *my_strchr(char *s,char ch)
{
    char j=-1;
	int i;
	char *r=&j;

    for(i=0;*s!='\0';i++)
    {
        if(*s==ch)                  
            return s;
		s++;
    }
	return r;
}

/*
 ==================================================
       FINDING INDEX OF SUBSTRING IN A STRING
===================================================
 */
char *my_strstr(char *str, char *sub)
{
	char i=-1;
	char *ptr=&i;
	while(*str!='\0')             //loop until the main string length.
	{
	char *t1=str;                 //assigning addresses of strings to temp pointer variables.
	char *t2=sub;
	
	while(*t1 && *t2 && (*t1==*t2))     //checking value of t1&t2 are char or not and then comaparing if both are equal.
	{
		t1++;                      //if both are equal then incrementing to check the next character of substring.
		t2++;
	}
	if(!*t2)                                    //if the substring reached upto null character it means the substring is found in main string and returning the string address.
		return str;
	str++;
	}
	return ptr;                     //returning -1 if the substring not present in main string

}



/*
 *=============================================
 *       STRING REPLACE FUNCTION
 *============================================
 */
char * my_strreplacestr(char *str, char *sub1 , char *sub2)
{
	char *t1;
	char *t2;
	char *t3;

	while(*str!='\0')
	{
		t1=str;
		t2=sub1;
		t3=sub2;

		while(*t1 && *t2 &&(*t1==*t2))                           //finding if the substring is present in main string or not
		{
			t1++;
			t2++;
		}
		while(!*t2 && *t3!='\0')                           //if present then repalcing the main string with the replace string(sub2)
		{												  //by running the loop until replace string reaches null char
			*str=*sub2;
			str++;
			t3++;
		}
		str++;
	}
	return str; 
}


