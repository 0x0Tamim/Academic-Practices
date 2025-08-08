#include<stdio.h>
int main()
{
    int x;
    printf("Enter amount:");
    scanf("%d",&x);
    printf("Total number of notes:\n");
    printf("500:%d\n",x/500);
    printf("100:%d\n",(x%500)/100);
    printf("50:%d\n",((x%500)%100)/50);
    printf("20:%d\n",(((x%500)%100)%50)/20);
    printf("10:%d\n",(((((x%500)%100)%50)%20)/10));
    printf("5:%d\n",((((((x%500)%100)%50)%20)%10)/5));
    printf("2:%d\n",((((((((x%500)%100)%50)%20)%10)%5)/2)));
    printf("1:%d\n",(((((((((x%500)%100)%50)%20)%10)%5)%2)/1)));
}
