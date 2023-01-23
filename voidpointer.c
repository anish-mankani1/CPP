/*

*/
#include<stdio.h>
int main()
{
    int  a=5;
    float b=3.4;
    char ch='c';
    void *vp;

    vp=&a;
    printf("\n%d",*(int*)vp);         // yaad rakhna
    vp=&b;
    printf("\n%f",*(float*)vp);
    vp=&ch;
    printf("\n%c",*(char*)vp);
    return 0;
}