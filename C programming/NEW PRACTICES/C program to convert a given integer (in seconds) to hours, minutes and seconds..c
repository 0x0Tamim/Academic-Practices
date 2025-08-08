#include<stdio.h>
int main()
{
    int s,m,h,se;
    printf("Enter seconds:");
    scanf("%d",&s);
    h=s/3600;
    m=(s%3600)/60;
    se=((s%3600)%60);
    printf("%d Hour\n%d minute\n%d second",h,m,se);
    return 0;
}
