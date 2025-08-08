#include<stdio.h>
#define max 100
int main()
{
    int n,i,j,a[max];
    printf("How many elements:");
    scanf("%d",&n);
    printf("Enter %d elements of array:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Elements are:");
    for(j=0;j<n;j++){
        printf("%d ",a[j]);
    }
return 0;
}
