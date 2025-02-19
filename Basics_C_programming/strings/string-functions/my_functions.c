#include<stdio.h>



/*================================
    String lowercase converter
===================================
*/
#include"fun.h"
void my_strlwr(char s[])
{
    int i=0;                                        
    
    while(s[i]!='\0')                      
    {
        if(s[i]>='A'&&s[i]<='Z')                
        {
            s[i]=s[i]+32;             
        }
       i++;
    }
    
}

/*================================
    Finding index of character in a string 
===================================
*/


int my_strchr(char s[],char ch)
{
    int i;                 

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==ch)                  
            return i;              
    }
}


/*========================================================
    Finding the index of last appearence of that character
=========================================================
*/


int my_strrchr(char s[],char ch)
{
    int i,j,k=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==ch)
            j=i;
        else if(s[i]!=ch)
            k++;
    }
    if(k==i)
        return -1;  //if character not present in string returns -1
    else
    return j;
}



/*================================
    String uppercase converter
===================================
*/

void my_strupr(char s[])
{
    int i=0;                             
    printf("Before coversion :%s\n",s);
    while(s[i]!='\0')                       
    {
        if(s[i]>=97&&s[i]<=120)                
        {
            s[i]=s[i]-32;             
        }
        i++;
    }
    printf("After conversion :%s\n",s);          

}


/*============================================================
    String copy(copying source string with destination string)
==============================================================
*/

void my_strcpy( char d[], char s[])                  
{
    int i = 0;                     
    
    while( s[i] !='\0')                 
    {
        d[i] = s[i];                      
        i++;
    }
    d[i] = '\0';                        
       
}

/*============================================
    String copy upto particular index
==============================================
*/


void my_strncpy(char d[],char s[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        d[i]=s[i];
    }
    d[i]='\0'; 
 
}


/*================================
    String reverse function
===================================
*/

void my_strrev(char s[])
{
    int i,a,j,k;                         

    for(i=0;s[i]!='\0';i++);
    
    for(j=0,k=i-1;j<k;j++,k--)                             
    {
        a=s[j];
        s[j]=s[k];
        s[k]=a;
    }             
}


/*========================================
    String comparing returning 0 if equal
==========================================
*/


int my_strcmp(char s1[],char s2[])
{
    int i,j,k=0,r;

    for(i=0;s1[i]!='\0';i++);
    i--;

    for(j=0;j<i;j++)
    {
        if(s1[j]==s2[j])
            k++;
        else
        {
            r=s1[j]-s2[j];
            break;
        }

	}
	if(k==i)
		return 0;
	else
		return r;
}



/*================================
    String comparing insensitive
===================================
*/

int my_stricmp(char s1[],char s2[])
{
    int i,r;
    char str1[100],str2[100];


    for(i=0;s1[i]!='\0';i++);
    my_strcpy(str1,s1);
    my_strcpy(str2,s2);
    my_strlwr(str1);
    my_strlwr(str2);
    r=my_strcmp(str1,str2);

}

/*================================
    String concatanation
===================================
*/

void my_strcat(char d[],char s[])
{
    int i,j,k;                              
                                  
    for(i=0;d[i]!='\0';i++);              //string length

    for(j=i,k=0;d[j]!='\0',s[k]!='\0';j++,k++)
    {
        d[j]=s[k];
    }
   
}

/*=============================================
    String concatanation upto particular index
===============================================
*/

void my_strncat(char d[],char s[],int n)
{
    int i,j,k,l;

    for(i=0;d[i]!='\0';i++);
    l=i+n;
    d[i]=' ';
    i++;

    for(j=i,k=0;j<l;j++,k++)
    {
        d[j]=s[k];
    }
}



/*================================
    Palindrome function
===================================
*/


int my_palindrome(char s1[])
{
    int i,j,k,a,p=0;                            
    char s2[20];                                  //declaring string
    for(i=0;s1[i]!='\0';i++)
    {
        s2[i]=s1[i];                          //cloning s1[] into s2[]
    }

    for(j=0,k=i-1;j<k;j++,k--)                     //swapping s2
    {
        a=s1[j];
        s1[j]=s1[k];
        s1[k]=a;
    }
    printf("%s\n",s1);

    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]==s2[i])                    
            p++;                        
    }
    if(p==i)                             
       return 1;
    else
        return 0;                         
}

                                                    
/*================================
    Finding substring in a string
===================================
*/

int my_strstr(char str1[],char sub[])
{
    int i,j=0,k,l,count;
    for(i=0;str1[i]!='\0';i++)
    {
        k=i;
        count=0;
        j=0;
        if(str1[i]==sub[j])
        {
            count++;
            for(j=1;str1[++k]==sub[j];j++)
            {
                if(str1[k]=='\0')
                    break;
                count++;
            }
            for(l=0;sub[l]!='\0';l++);
            if(count==l)
                return i;
        }
    }
}



/*================================
      ASCII TO INTEGER conversion
===================================
*/

int my_atoi(char str[])
{
	int i=0,res=0,res1=0,l;
	my_strrev(str);
	while(str[i])
	{
		str[i]=str[i]-'0';
		res=(res*10)+str[i];
		i++;
	}
	l=my_strlen(str);
	while(l)
	{
		res1=res1*10+(res%10);
		res=res/10;
	}
	return res1;
}

/*================================
    INTEGER TO ASCII CONVERSION
===================================
*/

void my_itoa(int num)
{
	int i=0,res;
	char str[50];
	while(num)
	{
		res=num%10;
		str[i]=res+'0';
		num=num/10;
		i++;
	}
	str[i]='\0';
	my_strrev(str);
	printf("%s\n",str);
}



/*================================
    String length function
===================================
*/

int my_strlen(char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
}


