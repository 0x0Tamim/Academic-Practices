#include<stdio.h>
int main()
{    int n;
double f=1;
    printf("Enter number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
            f=f*i;
    } printf("Factorial of the number %d is %lf\n",n,f);
}
