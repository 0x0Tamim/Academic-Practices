#include<stdio.h>
int main()
{
    int a[9]={9,8,7,8,5,4,3,2,1},temp;
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){

            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf("%d",a[i]);
    }
}
