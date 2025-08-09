#include<stdio.h>
int main()
{

    char s1[]="Tamim Uz Zaman";
     char s2[]="Tamim uz Zaman";
     int d=strcmp(s1,s2);
     if(d==0){
        printf("Strings are equal");

     }
     else printf("Strings are not equal");



getch();



}
