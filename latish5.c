/*

*/
#include<stdio.h>
int main()
{
    int x;
    printf("enter number");
    scanf("%d",&x);
    int i=1;
    while(i<=x)
    {
        i=2*i-1;
        i++;
    
    
    printf("%d",i);
    }


    return 0;
}