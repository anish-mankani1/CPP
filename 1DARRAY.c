/*

*/
#include<stdio.h>
int main()
{
    int x[3][3],i,j,sum=0;
    printf("enter maytrix x");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           sum=sum+x[i][j];
        }
    }
     printf("%d is sum",sum);
    return 0;
}