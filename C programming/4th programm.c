#include<stdio.h>
int main()
{
    int A;
    printf("Write a number that you want to know if it is even or odd?\n Consider the number is 'A'\n");//even=1 and odd=0
    printf("A=");
    scanf("%d",&A);
    printf("%d",A%2==0);
    return 0;
}
