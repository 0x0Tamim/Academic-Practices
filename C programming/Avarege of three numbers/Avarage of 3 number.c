#include <stdio.h>
#include <stdlib.h>
int main()
{
float x,y,z;
printf("Lets calculate the avarage of 3 number\n");
printf("Now input three number in x,y and z\n");
printf("x=");
scanf("%f",&x);
printf("y=");
scanf("%f",&y);
printf("z=");
scanf("%f",&z);
printf("Answer = ");
printf("%f\n", (x+y+z)/3);
return 0;
}
