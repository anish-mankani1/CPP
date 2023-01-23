/*isme hum log i ki value change bhi nkar sakte hai jaise i++ ki jagah i=i+2 likh ke aur yaad rakhna agar i<=15 ya uski range mein jo ho usko 
rakhna nahi toh jitna bada number utne ans aate rahege

*/
#include<stdio.h>
int main()
{
    int i=0,a=5,b=7;
    for(i=a+b;i<=15;i=i+a)
    {
        printf("%d",i);
    }
    return 0;
}