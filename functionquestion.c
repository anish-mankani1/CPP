/* wap to print sum of two number using function--

*/
#include<stdio.h>
void add();
int main()
{
    add();
    return 0;
}
void add()
{
    int a,b,c;
    printf("enter two number");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("%d",c);
}