#include <stdio.h>

int main() {
    int m, n;
    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);
int highest_total_marks = 0;
    for (int i = 1; i <= m; i++) {
        int marks[n];
 printf("Enter marks for student %d: ", i);
        for (int j = 0; j < n; j++) {
            scanf("%d", &marks[j]);
        }
        int totalmarks=0;
        for(int j=0;j<n;j++){
            totalmarks=totalmarks+marks[j];
        }
        printf("Total mark of student %d:%d\n",i,totalmarks);
         if (totalmarks > highest_total_marks) {
            highest_total_marks = totalmarks;
        }
    }

    printf("Highest total marks: %d\n", highest_total_marks);



    return 0;

}
