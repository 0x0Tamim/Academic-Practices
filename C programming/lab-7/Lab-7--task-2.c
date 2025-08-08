#include<stdio.h>
#define x 100
int main()
{ int n,a[x];
    printf("How many numbers you want to take:");
    scanf("%d",&n);
    printf("Enter %d number:\n",n);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The numbers are in reverse order: ");
    for(int i=(n-1);i>=0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}
