#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, c ,N;

    for(N=1; ; N++)
    {

        c=0;
        printf("Enter any number: ");
        scanf("%d", &n);
        if(n<=1)
        {
            printf("%d is not a Prime number\n",n);
            //break;
        }
        else
        {
            for (i = 2; i <= sqrt(n); i++)
            {
                if(n%i==0)
                {
                    c++;
                }
            }
            if(c==0)
                printf("%d is a Prime number\n",n);
            else
                printf("%d is not a Prime number\n",n);

        }

    }

}
