#include<stdio.h>
#define max 100
int main()
{
    int i,j,n,a[max],temp;
    printf("How many elements:");
    scanf("%d",&n);
    printf("Enter %d elements of array:",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    printf("Array elements are:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);

    }
    printf("\nArray elements in ascending order:");
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
        printf("%d ",a[i]);
    }
    return 0;
}
