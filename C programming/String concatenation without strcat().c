#include<stdio.h>
int main()
{
    char s1[50]="My name is ";
    char s2[]="Tamim Uz Zaman";
    int i=0,j=0,len=0;
    while(s1[i]!='\0'){
        i++;
        len++;
    }
    while(s2[j]!='\0'){
        s1[len+j]=s2[j];
        j++;
    }
    printf("%s",s1);
    getch();
}
