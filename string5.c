/*

*/
#include<stdio.h>
#include<ctype.h>
int main()
{

    char c;
    printf("Ente the character you want to check\n");
    scanf("%c",&c);
    char arr[100]={0};
    fflush(stdin);
    printf("Enter the string you want to check your charcter\n");
    fgets(arr,100,stdin);
    int i;
    for(i=0;arr[i];i++)
    {
        if(arr[i]==c)
        {
            printf("this variable is present in string\n");
        }
    }



    return 0;
}