/*wap to find leap year 

*/
#include<stdio.h>
int main()
{
    int yr;                              
    printf("please trype the year");
    scanf("%d",&yr);
    if (yr%4==0)
    {
        printf("%d is leap year",yr);
    
    }
    else
    {
        printf("%d is not a leap year",yr);
    }
        
    return 0;
}