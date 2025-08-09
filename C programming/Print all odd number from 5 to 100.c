#include<stdio.h>
int main()
{ int n;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=5;i<=n;i++){// there is many process for it, you can use i=i+2 or continue
            if(i%2!=0)
        printf("%d\n",i);
    }
}
