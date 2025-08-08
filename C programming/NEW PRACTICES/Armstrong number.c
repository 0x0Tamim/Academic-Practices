#include<stdio.h>
#include<math.h>
int main()
{  int a,b,c,x,ans;
    printf("Enter a three digit number:");
    scanf("%d",&x);
    a=x/100;
    b=(x%100)/10;
    c=(x%100)%10;
    ans=pow(a,3)+pow(b,3)+pow(c,3);
    printf("Answer:%d",ans);
    return 0;
}
