#include<stdio.h>
#define pi 3.1416
int main()
{  //const float pi=3.1416;
    float r,a,p;
    printf("Enter the radious of a circle:");
    scanf("%f",&r);
    a=pi*r*r;
    p=2*pi*r;
    printf("Area=%f\n Peremeter =%f",a,p);
    return 0;

}
