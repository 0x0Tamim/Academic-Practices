#include<stdio.h>
int main()
{
    int p,i,a[]= {5,10,15,20,17,19,14,78,43,52},n;
    printf("Which number you want to search?");
    scanf("%d",&n);
    for(i=0; i<=10; i++)
    {
        if(a[i]==n)
        {
            p=i+1;

        }
    }
    if(p==0)
    {
        printf("Not found");
    }
    else
        printf("The number is found at %d position",p);
    return 0;
}
