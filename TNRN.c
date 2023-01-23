/*

*/
#include<stdio.h>
void add();           // function declarition
int main()
{
    add();              /// function calling
    return 0;                   // take nothing but return nothing
}
void add()    // empty parenthesis
{
    int a,b,c;
    printf("enter two number");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("%d",c);
    // no return keyword
}