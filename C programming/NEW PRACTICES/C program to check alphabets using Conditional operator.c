#include<stdio.h>
int main()
{
    char x;
    printf("Enter any character:");
    scanf("%c",&x);
    if(x>='A' && x<='Z')
        printf("It is a Alphabet and it is in capital letter");
    else if (x>='a' && x<='z')
        printf("It is a Alphabet and it is in small letter");
    else printf("It is not a Alphabet");
    return 0;


}
