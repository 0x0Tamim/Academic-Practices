#include<stdio.h>
int main()
{
    char s1[100];
    gets(s1);

    int i=0,j,len=0;
    while(s1[i]!='\0'){
        i++;
        len++;
    }
 char s2[len];
i=0;
 for(j=len-1;j>=0;j--){

    s2[i]=s1[j];
    i++;
 }
 s2[i+1]='\0';

    printf("%s",s2);
}
























