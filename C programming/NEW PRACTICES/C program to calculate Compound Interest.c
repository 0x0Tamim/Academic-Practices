#include<stdio.h>
#include<math.h.>
int main()
{
    float p,t,r,x,ci;
    printf("Enter principle:");
    scanf("%f",&p);
    printf("Enter time:");
    scanf("%f",&t);
    printf("Enter rate:");n
    scanf("%f",&r);
    x=(1+r/100);
    ci=p*pow(x,t);
    printf("Compound interest = %f",ci);
    return 0;
}
