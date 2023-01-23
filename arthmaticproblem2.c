/*

*/
#include<stdio.h>
int main()                     // yeh int wala problem hai

{
    int a[]={10,11,-1,56,67,5,4};
    int *p,*q;
    p=a;
    printf("%d\n",*p);
    printf("%d %d %d\n",(*p)++,*p++,++*p);
    printf("%d\n",*p);
    q=p+3;
    printf("%d\n",*q);
    printf("%d\n",*q-3);
    printf("%d\n",*--p+5);
    printf("%d\n",*p);
    printf("%d\n",*p+*q);
    return 0;
}