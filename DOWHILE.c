/*

*/
#include<stdio.h>
int main()
{
    int s=0,a=2;
    do
    {     printf(" %d",a);
        a=a+2;
        s=s+a;
    }while(a<50);
    {
        printf(" %d is sum\n",s);

    }
    return 0;
}