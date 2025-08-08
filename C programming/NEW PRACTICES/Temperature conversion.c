#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter temperature in Celsius:");
    scanf("%f",&c);
    f=((c/5)*9)+32;
    printf("Temperature in Farenheit=%f",f);
    return 0;
}
