/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 05-11-2024
* Program:Implementing my_strstr function 
* Sample Input :
* Sample output :Enter a string: prapulla
*                Enter a substring : ul
*                index of the substring in mains string is 4
*
*/


#include<stdio.h>
int my_strstr(char str1[],char sub[]);

int main()
{
    char s1[100];
    char sub[20];
    int in;

    printf("Enter string \n");
    scanf("%[^\n]s",s1);

    printf("ENter sub string\n");
    getchar();
    scanf("%[^\n]s",sub);
    in=my_strstr(s1,sub);
    printf("index  is %d\n",in);

    return 0;
}


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


