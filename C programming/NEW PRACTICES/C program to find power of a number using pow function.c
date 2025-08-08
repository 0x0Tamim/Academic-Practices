#include<stdio.h>
#include<math.h>

int main()
{
    int b,e;
    double a;
    printf("Enter base:");
    scanf("%d",&b);
    printf("Enter exponent:");
    scanf("%d",&e);
    a=pow(b,e);
    printf("%d^%d=%lf",b,e,a);
    return 0;
}


