#include<stdio.h>
int main()
{

    int x[10],sum=0;
    for(int i=0; i<10; i++)
    {
        scanf("%d",&x[i]);
    }

    {

        for( int i=0; i<10; i++)
            sum=sum+x[i];

    }
    printf("sum=%d\n",sum);
    return 0;
}
