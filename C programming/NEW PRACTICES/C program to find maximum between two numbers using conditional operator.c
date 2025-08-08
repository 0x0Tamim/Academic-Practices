#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter first number:");
        scanf("%d",&a);
        printf("Enter second number:");
        scanf("%d",&b);
        if(a>b){
            printf("Maximum: %d",a);
        }
        else printf("Maximum: %d",b);
        return 0;

}
