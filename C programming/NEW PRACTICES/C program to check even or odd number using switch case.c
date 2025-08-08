#include<stdio.h>
int main()
{   int x,a;
    printf("Enter number:");
    scanf("%d",&x);
    a=x%2;
    switch(a){
    case 1: printf("Odd numer");
    break;
    case 0:printf("Even number");
    break;
        }
        return 0;
}
