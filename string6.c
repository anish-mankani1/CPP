/*

*/
#include<stdio.h>
#include<string.h>
int main()
{
    int  flag=0,i;
    char s[100],c[100];
    printf("enter string 1");
    gets(s);
    printf("enter string 2");
    gets(c);
    for(i=0;s[i]!='/0'|| c[i]!='/o';i++)
    {
        if(s[i]!=c[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("both are same");
    }
    else{
        printf("both are different");
    }
    return 0;
}