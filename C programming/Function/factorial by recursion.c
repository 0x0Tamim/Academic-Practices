#include<stdio.h>
 int fact(int n){
 if(n<=0)
    return 1;
 else return n*fact(n-3);

 }
int main(){
int x;
printf("Enter any number to get factorial:");
scanf("%d",&x);
printf("Factorial = %d",fact(x));
return 0;


}
