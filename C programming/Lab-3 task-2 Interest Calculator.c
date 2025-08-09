
#include<stdio.h>
int main()
{
    float p,d,x,y,z;
    printf("Enter principal amount:");
    scanf("%f",&p);
    printf("Enter days:");
    scanf("%f",&d);
    x = p* 20 * (d / (365*100));
    y = p* 17 * (d / (365*100));
    z= p* 15* (d / (365*100));
    if(p>=0 && p<=10000)
    {
        printf("Amount of interest:%f",x);
    }
    else if(p>=10001&& p<=50000)
    {
        printf("Amount of interest:%f",y);
    }
    else if(p>50000)
    {
        printf("Amount of interest:%f",z);
    }
    return 0;


}
