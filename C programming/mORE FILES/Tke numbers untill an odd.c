#include<stdio.h>
int main()
{
    int n;
    do{
    printf("Enter number:");
            scanf("%d",&n);
//    printf("%d",n);
//    if(n%2 !=0){break;}

    }while(n%2==0);
    printf("Its an odd number!!!");
}
