/*

*/
#include<stdio.h>                   // yeh increment aur decrement hai
int main()
{
    int a[]={3,2,6,7,0,5};
    int *p=a;
    printf("%d\n",*p++);
    printf("%d\n",*p);
    printf("%d\n",*++p);
    printf("%d\n",*p--);
    printf("%d\n",*--p);
    return 0;
}