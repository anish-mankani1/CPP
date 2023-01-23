/*  wap to calculate the unit and amount with using if ladder


*/
#include<stdio.h>
int main()
{
    int cr,pr,unit,amount;
    printf("enter the value of cr and pr");
    scanf("%d %d",&cr,&pr);
    unit=cr-pr;
    printf("%d is unit",unit);
    if(unit<=500)
    amount=3*unit;
    else if(unit<=700)
    amount=5*unit;
    else if(unit<=900)
    amount=7*unit;
    printf("%d is amount",amount);
    



    return 0;
}