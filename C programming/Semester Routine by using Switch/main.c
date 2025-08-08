#include <stdio.h>
#include <stdlib.h>

int main()
{ char day; // type the first letter of today
    printf(" What day is today?\n Write the first letter of the day's name to represent today's day,use small s for sunday and capital S for saturday and R to reperesent  Thursday\n Enter day:");
    scanf("%s",&day);

    switch(day) {
    case 'S' : printf("So today is Saturday,Today is your holiday! Enjoy!\n");
                     break;
   case 's' : printf("So today is Sunday, You have CSE class at 8:30 am and CSE lab at 11:50 am\n");
                     break;
    case 'm' : printf("So today is Monday, You have math class at 8:30 am and english class at 1:30 pm\n");
                     break;
    case 't' : printf("So today is Tuesday, Today is your holiday! Enjoy!\n");
                     break;
    case 'w' : printf("So today is Wednesday, You have math class at 8:30 am and english class at 1:30 pm\n");
                    break;
    case 'R' : printf("So today is Thursday, You have only one class today and it is CSE 103 at 8:30 am\n");
                     break;
    case 'f' : printf("So today is Friday,Today is your holiday! Enjoy! Remember today has JUMMA \n");
                    break;
                    default : printf("Not a valid Day");











    }

    getch();
}
