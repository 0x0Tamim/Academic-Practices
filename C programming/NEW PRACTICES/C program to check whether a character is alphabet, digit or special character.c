#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character:");
    scanf("%c",&ch);
    if((ch>='A' && ch<='z'))
        printf("%c is Alphabet",ch);
    else if (ch>='0' && ch<='9')
    printf("%c is digit",ch);
        else printf("Others");
}
