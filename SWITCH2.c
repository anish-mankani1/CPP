/* wap to find length and breadth,simple interest,radius by using switch

*/
#include<stdio.h>
int main()
{
     int c,ans,l,b,p,n,r;
     float area,radius;
    printf("\n 1. area of rectangle");
    printf("\n 2. simple interest");
    printf("\n 3.  area of circle");
    printf("\n 4. enter your choice");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        printf("please enter the length and breadth");                 // 
        scanf("%d %d",&l,&b);
        ans=l*b;
        printf("%d is ans",ans);
        break;
        case 2:
        printf(" please enter the value of p,n,r");
        scanf("%d %d %d",&p,&n,&r);
        ans=p*n*r/100;
        printf("%d is ans", ans);
        break;
        printf(" please enter the radius");
        scanf("%f",&radius);
        area=3.14*radius*radius;
        printf("%fis radius",radius);
        break;
        default:
        printf("you have the wrong choice");


    }
    return 0;
}