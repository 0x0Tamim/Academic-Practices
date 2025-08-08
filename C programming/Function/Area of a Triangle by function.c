#include<stdio.h>
float triangleArea(float a,float b){
return .5*a*b;
}
int main(){
float b,h;
printf("Enter base and hight:");
scanf("%f %f",&b,&h);
printf("Area = %f",triangleArea(b,h));
return 0;



}
