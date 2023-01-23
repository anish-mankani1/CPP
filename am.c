/*

*/
#include<stdio.h>

    struct cmp
    {
        char nm[100];
        char jb[100];
       struct detail
       {

       
        int sal,hra,da,ta,gross;
       }y;

    }x;

    int main()
    {
        printf("enter data");
        scanf("%s %s %d %d %d %d %d",x.nm,x.jb,&x.y.hra,&x.y.da,&x.y.ta,&x.y.gross,&x.y.sal);
        x.y.hra=x.y.sal*2/100;
         x.y.da=x.y.sal*3/100;
          x.y.ta=x.y.sal*4/100;
          x.y.gross=x.y.hra+x.y.da+x.y.ta;
          printf("\n%s %s",x.nm,x.jb);
          printf("\n%d is hra %d is da %d is ta %d is gross %d is sal",x.y.hra,x.y.da,x.y.ta,x.y.gross,x.y.sal);
    
           return 0;
}