/*wao to calculate five number of greatest BY IF ELSE

*/
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("please enter five number");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);         // if ya elseif ya else ke aage kabhi nahi lagega ; or semi column
    if(a>b && b>c && c>d && d>e)
    {
        printf("%d is greatest",a);                  // is mein hum smallest bhi kar sakte hai
    }
    else if (b>c && c>d && d>e )
    {
        printf("%d is greatest",b);              // yeh ladder if ka program hai
    
    }
    else if ( c>d && d>e)
    {
        printf("%d is greatest",c);
    }
    else if(d>e)
    {
        printf("%d is greatest",d);
    }
    else 
    {
        printf("%d is greatest",e);
    }

    
    return 0;
}