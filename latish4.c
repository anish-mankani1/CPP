/*enen hai yeh latish ki method hai

*/
#include<stdio.h>
int main()
{
    int x;
    printf("please enter even  number");
    scanf("%d",&x);
    int i=1;
    while(i<=x)
    {
        printf(" %d",2*i);
        i++;
    }
    return 0;
}