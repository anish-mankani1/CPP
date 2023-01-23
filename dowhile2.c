/*

*/
#include<stdio.h>
int main()
{
    int a=3,s=0;
    do
    {
        printf(" %d",a);
        a=a+2;
        s=s+a;
    }while(a<51);
    {
        printf(" %d is sum",s);
    }
    return 0;
}