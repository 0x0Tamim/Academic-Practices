#include<stdio.h>
#define max 100
int main()
{
    int a[max],i,n;
    printf("How many number you want to take(maximum 100)?");
    scanf("%d",&n);
    printf("Enter %d number:\n",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    printf("Numbers are: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
