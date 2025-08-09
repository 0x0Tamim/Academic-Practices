#include<stdio.h>
int main()
{
    int i=1,j,n;
    printf("Enter total line no.");
    scanf("%d",&n);
    for( i; i<=n; i++)
    {
        for(  j=n; j>=i; j--)
        {
            printf("* ");
        }
        printf("\n");


    }
}
