#include <stdio.h>

int main() {
    int units;
    float totalBill;
    printf("Input Unit consumed: ");
    scanf("%d", &units);


    if (units <= 199) {
        totalBill = units * 4.00;
    } else if (units >= 200 && units < 400) {
        totalBill = 199 * 4.00 + (units - 199) * 5.50;
    } else if (units >= 400 && units < 600) {
        totalBill = 199 * 4.00 + 200 * 5.50 + (units - 399) * 7.80;
    } else {
        totalBill = 199 * 4.00 + 200 * 5.50 + 200 * 7.80 + (units - 599) * 10.00;
    }

    printf("Total Bill: BDT. %f\n", totalBill);

    return 0;
}
