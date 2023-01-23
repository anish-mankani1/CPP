/*wap to find no is even or odd

*/
#include<stdio.h>
int main()
{
    int no;
    printf("please type nymber");
    scanf("%d",&no);            // if else wala hai 
    if(no%2==0)
    {
        printf("%d is even no",no);
    }
    else
    {
        printf("%d is odd no",no);
    }


    return 0;
}