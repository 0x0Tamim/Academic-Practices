#include <stdio.h>
#include <stdlib.h>

int main()
{ printf(" Lets check which number is greatest among three numbers\n");
int x,y,z;
printf("x =");
scanf("%d",&x);
printf("y =");
scanf("%d",&y);
printf("z =");
scanf("%d",&z);
printf("Is x is the greatest number?-->");
printf("%d\n",x>y && x>z);
printf("Is y is the greatest number?-->");
printf("%d\n", y>z && y>x) ;
printf("Is z is the greatest number?-->");
printf("%d\n", z>x && z>y);
   return 0;
}
