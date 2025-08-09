#include<stdio.h>
int main()
{
    int x,a,b,c,d;
    printf("Enter number:");
    scanf("%d",&x);
    a=x/10000;
    b=x%10;
    c=((x/1000)%10);
    d=((x%100)/10);
    if(a==b && c==d) printf("Yes, it is a Palindrome number");
    else printf("No, its not a Palindrome number");
    return 0;
}
