#include<stdio.h>
int main()
{
    float u,a,tb;
    printf("Enter total Unit:");
    scanf("%f",&u);
    if(u>=0 && u<200){
        tb=u*4;
    }
    else if(u>=200 && u<400){
        tb=u*5.5;
    }
    else if(u>=400&& u<600){
            tb=u*7.80;

    }
    else if(u>=600){
        tb=u*10;
    }
printf("Total Bill: BDT. %f",tb);

}
