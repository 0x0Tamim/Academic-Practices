#include<stdio.h>
#define max 100
int main()
{
    int a,b,x[max][max];
    printf("Enter row and column  number:");
    scanf("%d %d",&a,&b);
     x[a][b];
     int sum[a],avg[b];
    printf("Inpur elements of matrix:");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&x[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            sum[i]=0+x[i][j];
            avg[i]=sum[i]/b;
printf("%d ",x[i][j]);
        }
        printf("%d",sum[i]);
    }
    printf("\n");

}
