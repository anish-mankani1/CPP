/*

*/
#include<stdio.h>
int sum(int,int);
int main()
{
    int x,y;
    int s;                      // take something and return something
    printf("enter teo number");
    scanf("%d %d",&x,&y);
    s=sum(x,y);
    printf("%d",s);
    
    return 0;
}
int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
