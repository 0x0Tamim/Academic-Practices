#include<stdio.h>
#define max 100
int main()
{
    int n,i,j,a[max],Max,min,p,q;
    printf("How many elements:");
    scanf("%d",&n);
    printf("Enter %d elements of array:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
Max=a[0];
    for(j=1;j<n;j++){
if(a[j]>Max){
    Max=a[j];
    p=j;
}

    }
    printf("Maximum a[%d]= %d\n",p,Max);
    min=a[0];
    for(j=1;j<n;j++){
        if(a[j]<min){
            min=a[j];
            q=j;
        }
    }
    printf("Minimum a[%d]= %d",q,min);
return 0;
}

