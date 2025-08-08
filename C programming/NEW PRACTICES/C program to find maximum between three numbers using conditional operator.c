#include<stdio.h>
int main()
{
    int a,b,c;
     printf("Enter first number:");
        scanf("%d",&a);
        printf("Enter second number:");
        scanf("%d",&b);
         printf("Enter third number:");
        scanf("%d",&c);
        if(a>b && a>c){
            printf("Maximum is %d",a);
        }
        else if(b>a && b>c){
printf("Maximum is %d",b);
        }
        else printf("Maximum is %d",c);
        return 0;
}
