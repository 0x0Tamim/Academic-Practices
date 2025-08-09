#include<stdio.h>
int main()
{
    float  x,y,z;
    printf("Salesperson's gross sales:");
    scanf("%f",&x);
    y=200+((9.0/100.0)*x);
    z=200+((15.0/100.0)*x);
    if(x<5000)
        printf("Salesperson's earning:%f", y);
    else if(x>=5000)
        printf("Salesperson's earning:%f", z);
    return 0;

}
