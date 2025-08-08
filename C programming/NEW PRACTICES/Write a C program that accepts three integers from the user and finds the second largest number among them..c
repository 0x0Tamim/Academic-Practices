#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c){
        if(b>c) printf("%d is the second largest number",b);
        else printf("%d is the second largest number",c);
    }
    else if(b>c&&b>a){
        if(c>a)printf("%d is the second largest number",c);
        else printf("%d is the second largest number",a);
    }
    else {
        if(a>b)printf("%d is the second largest number",a);
        else printf("%d is the second largest number",b);
    }
}
