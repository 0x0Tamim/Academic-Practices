#include<stdio.h>
int main()
{
    float f,s,t;
printf("Enter first Angle:");
scanf("%f",&f);
printf("Enter second Angle:");
scanf("%f",&s);
t=180-(f+s);
printf("Third Angle is %f degree",t);
return 0;
}
