/*

*/
#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};                     // addition arthmetic hai 
    int *p=&a[0];
    printf("%d\n",*p);
    printf("%u\n",p);                   // address 80 aue 84 isliye huha kyu ki p+2 kiya toh 4bytes add hogayi
                                           //p+3 karte toh 12 bytes hoti
    p=p+1;                               // int mein  4bytes hoti hai isliye 1*4 or 2*4 or 3*4 hu ha
    printf("%d\n",*p);
    printf("%u\n",p);
    
    
    return 0;
}