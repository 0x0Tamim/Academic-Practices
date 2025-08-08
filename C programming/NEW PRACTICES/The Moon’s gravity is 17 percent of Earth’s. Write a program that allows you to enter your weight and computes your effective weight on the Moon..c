#include<stdio.h>
int main()
{
    float wm,we;
    printf("Enter weight on earth:");
    scanf("%f",&we);
    wm=(we/100)*17;
    printf("Weight on moon is %f",wm);
    return 0;
}
