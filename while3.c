/*

*/
#include<stdio.h>
int main()
{
    int d,no,s;
    printf("enter number");
    scanf("%d",&no);
    do
    {
        printf("%d is sum",s);

    }while(no!=0);
    {
        d=no%10;
        s=s+d;
        no=no/10;
    }
    return 0;
}