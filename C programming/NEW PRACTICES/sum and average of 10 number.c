#include<stdio.h>
int main()
{
    int a[9],sum=0,ave;

    for(int i=0;i<=9;i++){
             scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    ave=sum/10;
    printf("Sum = %d\nAverage = %d",sum,ave);

}
