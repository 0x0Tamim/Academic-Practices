#include<stdio.h>
#include<math.h>
double sqr(int a){
    return pow(a,2);
}
int main()
{ int a;
    printf("Enter a number to square:");
    scanf("%d",&a);
    printf("a^2 = %lf",sqr(a));
    return 0;

}
