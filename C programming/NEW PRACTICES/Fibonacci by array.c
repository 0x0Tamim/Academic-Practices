#include<stdio.h>
int main()
{
    int n,a[100];
    printf("How many fibonacci numbers you to print:");
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(int i=2; i<=n; i++)
    {

        a[i]=a[i-2]+a[i-1];

    }
     printf("\nFibonacci numbers are: ");

    for(int i=0; i<=n;i++)
    {
        printf("%d ",a[i]);
    }


    return 0;



}

