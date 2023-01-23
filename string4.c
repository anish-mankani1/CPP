/*

*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i,w=0,s=0,ch=0,l;
    char nm1[100],c;
    printf("enter data");
    gets(nm1);
    l=strlen(nm1);
    printf("%d is length",l);
    for(i=0;i<l;i++)
    {
        c=nm1[i];
        if(c==' ')
        w=w+1;
        if(c=='.')
        s=s+1;
        ch=ch+1;
    }
    printf("\n%d times words",w);
    printf("\n%d times sentence",s);
    printf("\n%d times character",ch);
    
    
    return 0;
}