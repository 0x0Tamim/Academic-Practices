#include<stdio.h>
int main()
{
    int a[3][3],j;
    printf("Enter input in 3*3 matrix: ");
    for(int i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");

    } int sum=0;

     for(int i=0; i<3; i++)
    {

           sum=sum+a[i][i+1];
        }
        printf("\nDiagonal sum = %d",sum);



}
