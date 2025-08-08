#include<stdio.h>
int main()
{
int input;
printf("Enter a number: ");
scanf("%d", &input);
while(input/10)
{printf("%d\n", input %10);
 input/=10;}


}

