#include<stdio.h>
int main()
{ int sum=0,n;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}
