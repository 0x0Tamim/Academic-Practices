#include<stdio.h>
#include<math.h>
int main()
{
    for(int i =1;i<=1000;i++){
        int a,b,c,x=i,ans;
    printf("Enter a three digit number:");

    a=x/100;
    b=(x%100)/10;
    c=(x%100)%10;
    ans=pow(a,3)+pow(b,3)+pow(c,3);
    printf("Answer:%d",ans);
    }
}
