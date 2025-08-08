#include<stdio.h>
int main()
{
    int a,b,i,j,n;
    printf("How many rows?");
    scanf("%d",&a);
    printf("How many columns?");
    scanf("%d",&b);
    int x[a][b];
    printf("Now enter the element of matrix:\n");
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        { printf("a[%d][%d] : ",i,j);
            scanf("%d",&x[i][j]);
        }

    }

    printf("\nThe matrix is:\n");
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            printf("%d  ",x[i][j]);
        }
        printf("\n");


    }



    return 0;

}
