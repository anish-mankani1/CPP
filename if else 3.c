/*wap to calculate positive or negative

*/
#include<stdio.h>
int main()                                                           // if else aur ternary operator ek hi jaise hai basd if else ka farak hai
{
    int no;
    printf("please type the number");                      // ternary aage karuga
    scanf("%d",&no);
    if (no>0)

    {                                                                      // if else mein positive negative wala hai
        printf("%d is positive",no);

    }
    else 
    {
        printf("%d is negative",no);
    }
    return 0;
}