/*

*/
#include<stdio.h>
int main()
{
    int x[3][3],i,j,sr,sc;
    printf("enter matrix x");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          scanf("%d",&x[i][j]);

        }
    }
    for(i=0;i<3;i++)
    {
        sr=0;
        sc=0;
        for(j=0;j<3;j++)
        {
         sr=sr+x[i][j];
         sc=sc+x[j][i];
        }
        printf("\n%d is sr",sr);
        printf("\n%d is sc",sc);
    }

        return 0;
}