/*

*/
#include<stdio.h>
int add(int);
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    j=add(i);
    printf("%d",j);
     
    
    return 0;
}
int add(int i)
{
     static int count;
    count=count+i;
    return count;
}
    