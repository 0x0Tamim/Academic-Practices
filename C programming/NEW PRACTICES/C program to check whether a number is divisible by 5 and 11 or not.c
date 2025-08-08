#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number to check is it is divisible by 5 and 11 or not:");
    scanf("%d",&x);
    (x%5==0 && x%11==0)? printf("Yes"): printf("No");
    return 0;
}
