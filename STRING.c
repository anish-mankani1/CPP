/*

*/
#include<string.h>
#include<stdio.h>
int main()
{
    char nm1[100],nm2[100];
    int l;
    printf("enter  name");
    scanf("%s",nm1);
    l=strlen(nm1);
    printf("\n%d is length",l);
    strcpy(nm2,nm1);
    strrev(nm1);
    printf("\n%s is revese",nm1);
    l=strcmp(nm1,nm2);
    if(l==0)
    printf("\n%s is parindrone",nm1);
    else
    printf("\n%s is not parildrone",nm1);


    

    

    return 0;
}