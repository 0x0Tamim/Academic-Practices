
#include<stdio.h>
#define x 100
int main()
{
    int n,a[x],max,min,p=0,q=0,i,j;
    printf("How many numbers you want to take:");
    scanf("%d",&n);
    printf("Enter %d number:\n",n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            p=i;
        }


    }
    min=a[0];
    for(int j=1; j<n; j++)
    {
        if(a[j]<min)
        {
            min=a[j];
            q=j;
        }


    }

    printf("Maximum a[%d] = %d\nMinimum a[%d] = %d ",p,max,q,min);


    return 0;

}
