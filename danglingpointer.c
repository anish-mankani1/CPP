/*

*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int*p=(int*)malloc(sizeof(int));   // yeh simple free huha abhi free dangling lagane ke hai
    *p=10;
    printf("%d",*p);
    free(p);                  // free karne kee baad garbage value aahegi
   printf("%d",*p);
   // p=NULL;                      // null lagadiye toh  value 0 hojahegi 
   // printf("%d",p);            //  confuse mat hone value 0 matlab a ki  value aur hamne a liya hi anhi hai 
                               // isliye pointer humko ek hi value dega 100

    return 0;
}