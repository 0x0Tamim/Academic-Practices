#include<stdio.h>

int sum(int a, int b){

return a+b;

}
int main()
{   int x,y;
    printf("Enter 2 input:");
    scanf("%d %d",&x,&y);
    printf("x + y = %d",sum(x,y));
    return 0;
}
