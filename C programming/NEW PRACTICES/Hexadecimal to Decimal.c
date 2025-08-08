#include<stdio.h>
int main()
{ int x,y,z;
int A=10,B=11,C=12,D=13,E=14,F=15;
    printf("Enter 2 character first one is 0-9 and second one is 'A'-'F'/ a hexadecimal number to convert it into decimal number:");
    scanf("%d% %d",&x,&y);
    z=(x*16)+y;
    printf("The hexadecimal number is: %d",&z);
    return 0;

}
