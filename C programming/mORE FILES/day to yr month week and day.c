#include<stdio.h>
int main()
{
int d,y,m,w,days;
printf("enter the total number:");
scanf("%d",&d);
y=d/365;
m=((d%365)/30);
w=((d-(y*365)-(m*30))/7);
days=(d-(y*365)-(m*30)-(w*7));
printf("%d\n%d\n%d\n%d\n",y,m,w,days);
return 0;}
