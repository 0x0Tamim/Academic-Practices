#include<stdio.h>
int main()
{
    int d,y,m,w;
    printf("Enter total days:");
    scanf("%d",&d);
    y=d/365;
    m=(d%365) /30;
    w=((d%365) %30)/7;
    d=((d%365) %30)%7;
printf("Years=%d\nMonths=%d\nWeeks=%d\nDays=%d",y,m,w,d);

}
