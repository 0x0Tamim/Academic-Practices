#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter three sides of triangles:\n");
    scanf("%f %f %f",&a,&b,&c);
    if(a+b<=c||b+c<=a||c+a<=b){
        printf("It is not a triangle");}
        else{
             if (a==b&&b==c)
        printf("Triangle is equilateral");
 else if(a==b || b==c || c==a)
      printf("Triangle is scalene");
    else printf("Triangle is isosceles");
        }
    return 0;
}
