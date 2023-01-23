/*

*/
#include<stdio.h>

int add(int x,int y);
int main()                          // take something return something
{
    int x=2,y=5;
    y=add(y,x);
    x=add(y,x);
    printf("\n%d",x);
    printf("\n%d",y);
    
    return 0;
}
int add(int x,int y)           // yaha pe y ki value x ko milegi aur x ki y ko
{                                // agar y aur x likhe toh barobar value milti
    x=x*2+y;
    return x;

}