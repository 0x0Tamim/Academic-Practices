#include<stdio.h>
int main()
{
    char s1[]=" mam ";
    char s2[50];
    int i=0,j,len=0;
    while(s1[i]!='\0'){
        i++;
        len++;
    }

i=0;
 for(j=len-1;j>=0;j--){

    s2[i]=s1[j];
    i++;
 }
 s2[i+1]='\0';
 printf("%s\n",s1);
    printf("%s\n",s2);

    int d=strcmp(s1,s2);
     if(d==0){
        printf("Strings are equal");

     }
     else printf("Strings are not equal");

}
