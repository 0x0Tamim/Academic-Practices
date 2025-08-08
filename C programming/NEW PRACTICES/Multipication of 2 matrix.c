#include<stdio.h>
int main()
{
    int a,b,i,j,n;
    printf("How many rows for A matrix?");
    scanf("%d",&a);
    printf("How many columns for A matrix?");
    scanf("%d",&b);
    int x[a][b];
    printf("Now input the elements of A matrix one by one:\n");
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        { printf("A[%d][%d] = ",i,j);
            scanf("%d",&x[i][j]);
        }

    }

    printf("\nThe matrix A =\n");
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            printf("%d  ",x[i][j]);
        }
        printf("\n");


    }
{
    int a,b,i,j,n;
    printf("How many rows for B matrix?");
    scanf("%d",&a);
    printf("How many columns for B matrix?");
    scanf("%d",&b);
    int y[a][b];
    printf("Now input the elements of B matrix one by one:\n");
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        { printf("B[%d][%d] = ",i,j);
            scanf("%d",&y[i][j]);
        }

    }

    printf("\nThe matrix B =\n");
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            printf("%d  ",y[i][j]);
        }
        printf("\n");


    }

    int z[a][b];
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            z[i][j]=x[i][j]*y[i][j];
        }
    }

     printf("\nA*B = \n");
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            printf("%d  ",z[i][j]);
        }
        printf("\n");


    }




    return 0;

}
}

