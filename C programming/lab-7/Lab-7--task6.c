#include<stdio.h>
#define x 100
int main()
{
    int n,a[x];
    printf("How many numbers you want to take:");
    scanf("%d",&n);
    printf("Enter %d number:\n",n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Even numbers are:\n");
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0)
            printf("%d ",a[i]);
    }
    printf("\nOdd numbers are:\n");
    for(int i=0; i<n; i++)
    {
        if(a[i]%2!=0)
            printf("%d ",a[i]);
    }




    return 0;
}
