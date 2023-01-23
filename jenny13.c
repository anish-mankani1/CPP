/*

*/
#include<stdio.h>
int main()
{
    int i,a,sum;
    for(i=1;i<=5;i++)
  
    {
         printf("enter no");
     scanf("%d",&a);
        
        if(a<0)
        break;
        sum=sum+a;
    }
    printf("%d is sum",sum);
    printf("end of program");
    
    return 0;
}
