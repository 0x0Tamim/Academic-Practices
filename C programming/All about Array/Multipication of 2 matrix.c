#include<stdio.h>
int main()
{
    int a,b,n,i,j;
    printf("How many rows in A matrix?");
    scanf("%d",&a);
    printf("How many rows in A matrix?");
    scanf("%d",&b);
    int x[a][b];
    printf("Input elements of matrix A :");
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    printf("\nA matrix = \n");
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }

    {

        int a,b,n,i,j;
        printf("How many rows in B matrix?");
        scanf("%d",&a);
        printf("How many rows in B matrix?");
        scanf("%d",&b);
        int y[a][b];
        printf("Input elements of matrix B :");
        for(i=0; i<a; i++)
        {
            for(j=0; j<b; j++)
            {
                scanf("%d",&y[i][j]);
            }
        }

        printf("\nB matrix = \n");
        for(i=0; i<a; i++)
        {
            for(j=0; j<b; j++)
            {
                printf("%d ",y[i][j]);
            }
            printf("\n");
        }


    int z[a][b],k,sum=0;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            for(k=0;k<b;k++){
                sum=sum+x[i][k]*y[k][j];
            }  z[i][j]=sum;
        sum=0;
        }

    }
    printf("A*B = \n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d ",z[i][j]);
        }
        printf("\n");
    }}
    return 0;

}
