#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    age>=18? printf("You are adult"):printf("You are not adult");
    getch();
}
