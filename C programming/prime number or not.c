#include <stdio.h>
#include <math.h>

int main() {
    int n, i, c = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    // Immediate check for numbers less than 2
    if (n <= 1) {
        printf("%d is not a Prime number.\n", n);
        return 0;
    }

    // Logic to check if the number is prime
    // Loop only up to the square root of n to find factors of n
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            c++;  // Factor found
            break;
        }
    }

    if (c == 0) {
        printf("%d is a Prime number.\n", n);  // If no factors found, n is prime
    } else {
        printf("%d is not a Prime number.\n", n);  // Otherwise, n is not prime
    }

    return 0;
}
