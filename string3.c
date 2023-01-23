/*

*/
#include<stdio.h>
#include<string.h>
int main()
{
     int l,vw=0,i;
     char nm1[100],c;
     printf("enter name");                                                     
     scanf("%s",nm1);
     l=strlen(nm1);
     printf("%d is length",l);
     for(i=0;i<l;i++)
     {
        c=nm1[i];
         if(c=='a'||c=='A'||c=='i'||c=='I'||c=='e'||c=='E'||c=='o'||c=='O'||c=='u'||c=='U')
         {
            vw++;
            printf(" %c",c);
         }
     }
     printf("\n%d times vowel",vw);
    return 0;
}