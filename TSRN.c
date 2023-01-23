/*

*/
#include<stdio.h>
 void add(int,int);
int main()                         // take something and return nothing
{
    int x,y;
    printf("enter the value of x and y");
    scanf("%d %d",&x,&y);
    add(x,y);
    
    return 0;
}
 void add(int a, int b)
 {
    int c;
    c=a+b;
    printf("%d",c);
 }