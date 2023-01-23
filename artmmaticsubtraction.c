/*

*/
#include<stdio.h>
int main()
{                                         // pointer subtraction
    int a[]={1,2,3,4,5};
    int *p=a;
    int *q=&a[3];
    printf("%d\n",*p);
    printf("%d\n",*q);
     printf("%d\n",p);
    printf("%d\n",q);
     p=p-q;
    printf("%d\n",p);
    q=q-p;
    printf("%d\n",q);
   p=p+2;
    printf("%d\n",p);
    q=q+2;
    printf("%d\n",q);
    
    
    
    


    return 0;
}