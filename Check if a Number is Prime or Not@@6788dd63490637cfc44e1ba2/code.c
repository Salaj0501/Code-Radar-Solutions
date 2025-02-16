#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 2) {
        isPrime = 0; // Numbers less than 2 are not prime
    } else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0; // If divisible, not prime
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
