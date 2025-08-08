#include<stdio.h>
#define max 100
void count( char a[]){
int i=0,Vcount=0,Ccount=0;
while(a[i]!='\0'){

    if(a[i]>='A'&&a[i]<='Z'||a[i]>='a'&&a[i]<='z'){
        if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
            Vcount++;}
        else {Ccount ++;}

    }
    else continue;
i++;
}

printf("Total vowel = %d and total consonants = %d",Vcount,Ccount);
}

int main()
{
    char ch[max];
    printf("Write anything:");
    gets(ch);
    count(ch);
    return 0;
}


