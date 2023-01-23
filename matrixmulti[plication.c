/*

*/
#include<stdio.h>
#define N 50
int main()
{
    int a[N][N],b[N][N],c[N][N],i,j,k,p,q,r,m,n,sum;          // matrix multiplication
    printf("enter row and column of first matrix");
    scanf("%d %d",&m,&n);
    printf("enter first matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter row and column of second matrix");
    scanf("%d %d",&p,&q);
    printf("enter second matrix");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(n!=0)
    {
        printf("can not multiply");
    }
    else
    {
        for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        sum=0;
        {
            for(k=0;k<m;k++)
            {
                sum=sum+(a[i][j]*b[i][j]);
            }
            c[i][j]=sum;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",c[i][j]);
        }
    }
    }
            
    

    return 0;
}