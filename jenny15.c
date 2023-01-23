/*

*/
#include<stdio.h>
int main()
{
    int x[2][3],i,j;
    printf("enter matrix x");
    for(i=0;i<2;i++)
    {
     for(j=0;j<3;j++)
     {
        scanf("%d",&x[i][j]);

     }
    }
    printf("matrix is:\n");
     for(i=0;i<2;i++)
    {
     for(j=0;j<3;j++)
     {
        printf("%d",x[i][j]);

     }
      printf("\n");
    }
     printf("\ntranspose of matix:\n");
     for(i=0;i<3;i++)
    {
     for(j=0;j<2;j++)
     {
        printf("%d",x[j][i]);

     }
     printf("\n");
    }
    return 0;
}