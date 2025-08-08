#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character:");
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z'){printf("It is a Upper case letter");}
    else if(ch>='a' &&ch<='z'){printf("It is a Lower case letter");}
    else{printf("Not a English letter");}
     return 0;
}
