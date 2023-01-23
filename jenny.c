/*yeh aise number hai jisme agar hum %6d laga hege toh 1234 number right side ajahge hum lkitne bhi nnumber laga  sakte hai
8%d hamari marji hai aur is me same to same negative wala bhi hai vo left side ho jahega aur ek aur hai %06d isse koi bhi number ho
uske pehle zero aajahega jaise 001234 

*/
#include<stdio.h>
int main()
{
    int a;
    printf("please enter the number");
    scanf("%d",&a);
    printf("%06d",a);    
    return 0;
}