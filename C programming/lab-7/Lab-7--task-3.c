#include<stdio.h>
int main()
{
    int a[10],b[10],i;
    printf("Enter 10 number:\n");
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<10; i++)
    {
        b[i]=a[i];

    }
    printf("First array elements are:\n");
    for(i=0; i<10; i++)
    {
        printf("%d   ",a[i]);

    }
    printf("\nSecond array elements are:\n");
    for(i=0; i<10; i++)
    {
        printf("%d   ",b [i]);

    }
    return 0;
}
