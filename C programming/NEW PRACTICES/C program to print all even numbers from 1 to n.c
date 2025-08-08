#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter n to print even number from 2 to n:");
    scanf("%d",&n);
    for(i=2;i<=n;i+=2)
        printf("%d\n",i);
}
