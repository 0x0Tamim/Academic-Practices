#include<stdio.h>
int main()
{
    float phy,chem,math,bio,com,ave;
    printf("Enter number of Physics:");
    scanf("%f",&phy);
    printf("Enter number of Chemistry:");
    scanf("%f",&chem);
    printf("Enter number of Math:");
    scanf("%f",&math);
    printf("Enter number of ICT:");
    scanf("%f",&com);
    printf("Enter number of Biology:");
    scanf("%f",&bio);
    ave=(phy+chem+math+bio+com)/5;
    printf("Average:%f\n",ave);
    if(ave>=90)
        printf("Grade: A+");
        else if(ave>=80&& ave<90)
        printf("Grade: A");
         else if(ave>=70&& ave<80)
        printf("Grade: B");
         else if(ave>=60 && ave<70)
        printf("Grade: C");
         else if(ave>=50&&ave<60)
        printf("Grade:D");
         else
        printf("Grade:F");
        return 0;
}
