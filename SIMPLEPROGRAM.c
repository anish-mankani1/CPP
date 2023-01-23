/*yeh simple hai jisme sum or addition karna 


*/



#include<stdio.h>


int main()
{
    int a,b,c,sm;
    float av;
    printf("please write the number");
    scanf("%d %d %d",&a,&b,&c );
    sm=a+b+c;
    av=sm/3;
    printf("%d is sum and %f is average",sm,av);
    
    return 0;
}