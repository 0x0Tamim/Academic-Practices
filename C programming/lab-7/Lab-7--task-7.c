#include<stdio.h>
#define max 100
int main()
{
    int i,j,temp,a[max],n;
    printf("How many numbers you want to take:");
    scanf("%d",&n);
    printf("Enter %d number:\n",n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array elements in ascending order: ");

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


