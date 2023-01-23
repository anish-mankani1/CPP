/*

*/
#include<stdio.h>
int main()
{
     int a,b,c,sum=0,percentage;
    printf("please enter three number");
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    percentage=sum/3;                                                        // yeh pass aur fail ka tha is mein hum 
    printf("%d  is sum and%d is percentage",sum,percentage);                  // sirf pass aur fail ka bhi mana sakte hai
    if(a>50 && b>69 &&c>89)
     printf("pass");
    else
    printf("fail");
    if(percentage>90)
    printf("rank 1");
    if(percentage>80)
    printf("rank2");
    if(percentage>70)
    printf("rank 3");
    
    return 0;
}
