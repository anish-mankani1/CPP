/*

*/
#include<stdio.h>
#include<string.h>
int main()
{      int l;
    char nm1[100],nm2[100],nm3[100];
    printf("enter 2 name");
    scanf("%s %s",nm1,nm2);
    l=strlen(nm1);
    printf("%d is length\n",l);
    l=strcmp(nm1,nm2);
    if(l==0)
    {
        printf("same");
    }                                                    // is mein %s lagana yaad rakhna 
    else
    {
        printf("different\n");
    }
    strcat(nm1,nm2);
    printf("%s is merged\n",nm1);
    strcpy(nm3,nm1);
    printf("%s is copied\n",nm3);
    strrev(nm1);
    printf("%s  is reverse\n",nm1);
    return 0;
}