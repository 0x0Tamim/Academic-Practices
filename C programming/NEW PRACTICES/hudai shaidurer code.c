#include<stdio.h>
int main()
{
    int marks[5][3],passMARKS=60,passed=1;
    int i,j;

    printf("Enter marks for five students in three course:\n");

    for(i=0;i<5;i++){
            printf("student%d:",i+1);
            for(j=0;j<3;j++){

                scanf("%d",&marks[i][j]);

            }

    }
    printf("\nResult:\n");
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            if( marks[i][j]<60){
                passed=0;
               break;}
               else passed=1;

        }
        if (passed==0){
            printf("No\n");}
            else { printf("Yes\n");
        }

    }


return 0;


    }
