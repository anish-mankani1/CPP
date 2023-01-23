/*

*/
#include<stdio.h>
char f();
int main()
{
    char ch;
   ch=f();
    printf("%c",ch);
             

    return 0;
}
char f()
{
 char c;
 printf("enter character");
 scanf("%c",&c);
 return c;
}