/*isme salary hra,da,ta,gross nikalna hai

*/
#include<stdio.h>
int main()
{
    int da,ta,hra,gross,bs;
    printf("please type the salary");
    scanf("%d ",&bs);
    hra=2*bs/100;
    da=3*bs/100;
    ta=4*bs/100;
    gross=bs+da+ta+hra;
    printf("%d is da and %d is ta and %d is hra and %d is gross",da,ta,hra,gross);

    return 0;
}