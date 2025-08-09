#include <stdio.h>

int main() {
 int n,a=0,b=1,feb;
 printf("How many terms?");
 scanf("%d",&n);
 for(int i=1;i<=n;i++){
feb=a;
printf("%d  ",feb);
feb=a+b;
a=b;
b=feb;

 }

    return 0;
}
