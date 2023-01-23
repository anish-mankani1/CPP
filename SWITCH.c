/* wap to find addition,subtraction and multiply by using  switch case

*/
#include<stdio.h>
int main()
{
    int a,b,c,ans;
    printf("\n 1. addition");
    printf("\n 2. substraction");
    printf("\n 3. multiply");
    printf("\n 4. enter your choice");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        printf("enter the number");
        scanf("%d %d",&a,&b);
        ans=a+b;
        printf("%d is ans",ans);
        break;
        case 2:
        printf("enter the number");                // yeh swich case ka program hai is mein aage aur hai
        scanf("%d %d",&a,&b);                        // is mein symbol ka yaad rakhna nahi toh output nahi aahega
        ans=a-b;                                           // : ; case 1: default:
        printf("%d is ans",ans);
        break;
        case 3:
        printf("enter the number");
        scanf("%d %d",&a,&b);
        ans=a*b;
        printf("%d is ans",ans);
        break;
        default:
        printf("you have entered wrong choice");
        


    }
    return 0;
}