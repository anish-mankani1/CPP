/*

*/
#include<stdio.h>
int main()
{
    int s,d,no;
    printf("enter the number");
    scanf("%d",&no);
    do
    {
        printf("%d is sum",s);

    }while(no!=0);
    { 
          s=0;
        d=no%10;
        s=s+d;
        no=no/10;

    }

    return 0;
}