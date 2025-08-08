#include<stdio.h>
#define max 100
int main()
{
    int n,i,j,a[max],sum=0;
    printf("How many elements:");
    scanf("%d",&n);
    printf("Enter %d elements of array:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(j=0;j<n;j++){

        sum=sum+a[j];
    }
    printf("Sum of elements = %d",sum);
return 0;
}
