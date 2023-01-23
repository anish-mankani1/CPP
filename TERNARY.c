/* wap to cakculate the even number by using ternary operator      ? 

*/
#include<stdio.h>
int main()
{
    int no,even,odd;                                             // is mein hum positive aur negative bhi kar sakte hai
    printf(" enter the number");                                  // leap yer bhi hota hai
    scanf("%d",&no);
    (no%2==0)? printf("%d is even",no):printf("%d is odd",odd);
    return 0;
}