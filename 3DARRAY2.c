/*

*/
#include<stdio.h>
int main()
{
    int x[3][3][2],i,j,k,flag=0,no;
    printf("enter matrix x");
     for(i=0;i<3;i++)
     {
   
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                scanf("%d",&x[i][j][k]);

            }
        }
    }
    printf("enter the number you want");
    scanf("%d",&no);
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                if(x[i][j][k]==no)
                {
                printf("%d is position",x[i][j][k]);
                flag=1;
            }
        }
    }
     }
    if(flag==0)
    printf("position not found");
    return 0;
}