#include <stdio.h>
#include <stdlib.h>

int main()
{ float x;
printf(" Input your score to know your obtained grade point\n");
printf("Enter your score:");
scanf("%f",&x);
if(x>=80 && x<=100){printf("Congratulations! You got A+\n");}
else if(x>=70&&x<=79) printf("Congratulations! You got A grade. Try to do better.\n");
else if (x>=60&&x<=69)printf("Congratulations! You got A- grade. Try to do better.\n");
else if (x>=50&&x<=59)printf("Congratulations! You got B grade. Try to do better.\n");
else if (x>=40&&x<=49)printf("Congratulations! You got C grade.Try to do better.\n");
else if (x>=33&&x<=39)printf("Congratulations! You got D grade.Try to do better.\n");
else printf("                     Alas! You Failed.\n    Try hard. In Sha Allah you will do better in the next exam.\n                     NEVER GIVE UP");
    getch();
}
