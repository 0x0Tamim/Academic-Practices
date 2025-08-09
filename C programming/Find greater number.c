#include<stdio.h>
int main()
{ printf("Enter seven number:\n");
    int i,a[7],max,x;
//    max=a[0];
    for(i=0;i<7;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<7;i++){
        if(a[i]>max)
        max=a[i];

    }
    printf("The greater number is %d",max);
}
