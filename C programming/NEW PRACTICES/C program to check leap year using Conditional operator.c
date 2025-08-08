#include<stdio.h>
int main()
{
    int y;
    printf("Enter year:");
    scanf("%d",&y);
    if(y%4==0 && y%400!=0){
        printf("%d is a Leap Year",y);
    }
    else if(y%400==0){
             printf("%d is a Leap Year",y);

    }
    else printf("%d is a Common Year",y);
}
