#include<stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int s=0;
    for(int i=0; i<=n; i++)
    {
        s+=i;
    printf("%d\n",i);
    }
    printf("Sum of first %d natural number is %d",n,s);

}
