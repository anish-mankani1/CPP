/*
                                  // yeh char wala hai
*/
#include<stdio.h>             //arthmetics jeenny problem
int main()
{
    char str[]={"welcome to jenny's lecture"};
    char *p=str;
    printf("%c\n",*p);
    printf("%c\n",*(p++ +1));
    printf("%c\n",*p);
    printf("%c\n",*((p-- +5)-1)+3);          // yaha p isliye aaya kyu ki  pehle value ko +5 phir  -1 phir +3 karega
                                           // baad mein-- karega par uski jarurat nahi padegi yaad rakhna
        printf("%c\n",*p);
        printf("%c\n",*(++p +10)-32);
        printf("%c\n",*p);  
        printf("%c\n",*p,*++p,--p);               // sky value se minus hoga smaall j se capital j upar bhi p sky value see aaya
        
        return 0;
}

