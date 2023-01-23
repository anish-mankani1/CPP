/*

*/
#include<stdio.h>
int sum();
int main()
{ int s;
    s=sum();
    printf("%d",s);               // take nothing but return something
    
    return 0;
}
int sum()
{
    int a,b,c;
    printf("enter two number");
    scanf("%d %d",&a,&b);
    c=a+b;
    return c;
}