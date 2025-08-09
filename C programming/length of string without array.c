#include<stdio.h>
int main()
{
    char s[]="Joy bangla jitbe abar nouka";
    int i=0 ,len=0;
    while(s[i]!='\0'){
        i++;
        len++;
    }
    printf("Length of string %d",len);
}
