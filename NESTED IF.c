/*  wap to calculate even odd but only using when no is positive  

*/
#include<stdio.h>
int main()
{                                                         
   int no,even,odd;
   printf("enter the number");
   scanf("%d",&no);
   if(no>0)
   {
    if(no%2==0)                                  // is mein agar curly bracket or {} nahi bhi di print ke liye chale ga 
    printf("%d is + even",no);
   else                                           // yeh nested if hai 
   printf("%df is - odd",no);
   }
   else 
   printf("%d is negative",no);

    return 0;
}