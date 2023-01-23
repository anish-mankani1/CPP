/*swap hai isme do number exchange karna tessre ko use karke

*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("please type two  number");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("%d is a and %d is b",a,b);
    return 0;
}