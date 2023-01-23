/*

*/
#include<stdio.h>
int main()
{
    int x[3][3],y[3][2],c[3][2],i,j,sum=0,k;
    printf("enter matrix x");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("enter matrix y");
     for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }
     for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<2;j++)
        {
            for(k=0;k<3;k++)
            {
            sum=sum+x[i][k]*y[k][j];
        }
        c[i][j]=sum;
       }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d \n",c[i][j]);
        }
    }
    
    return 0;
}