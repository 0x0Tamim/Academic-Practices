#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character to check is it vowel or not:");
    scanf("%c",&ch);
    switch(ch){
    case 'A': printf("%c is vowel",ch);
    break;
    case 'E': printf("%c is vowel",ch);
    break;
    case 'I': printf("%c is vowel",ch);
    break;
    case 'O': printf("%c is vowel",ch);
    break;
    case 'U': printf("%c is vowel",ch);
    break;
    case 'a': printf("%c is vowel",ch);
    break;
    case 'e': printf("%c is vowel",ch);
    break;
    case 'i': printf("%c is vowel",ch);
    break;
    case 'o': printf("%c is vowel",ch);
    break;
    case 'u': printf("%c is vowel",ch);
    break;
    default: printf("%c is not vowel",ch);
    }
    return 0;
}
