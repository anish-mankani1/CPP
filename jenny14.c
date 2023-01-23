/*

*/
#include<stdio.h>
int main()
{
    int i=1,a,sum;
    printf("enter a");
    scanf("%d",&a);
     while(i<=5)
    { 
        i++;
        sum=sum+a;
        if(a<0);
        break;     
    }
    printf("%d is sum",sum);
    return 0;
}