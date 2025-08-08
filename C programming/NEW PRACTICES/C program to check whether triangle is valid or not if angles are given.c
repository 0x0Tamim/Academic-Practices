#include<stdio.h>
int main()
{
    float x,y,z;
    printf("Enter three angles of triangle:\n");
    scanf("%f%f%f",&x ,&y, &z);
    if(x+y+z==180 && x>0 && y>0 && z>0)
        printf("Triangle is valid");
    else printf("Triangle is not valid");
    return 0;
}
