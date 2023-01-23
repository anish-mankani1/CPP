/*

*/
#include<stdio.h>
int main()
{
    int  x[3][3],y[3][3],i,j;
    printf("enter the matrix x");
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
            y[i][j]=x[j][i];

        }
    }
    printf("transpose of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",y[j][i]);

        }
        printf("\n");
    }

    return 0;
}