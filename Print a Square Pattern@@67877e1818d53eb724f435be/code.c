#include <stdio.h>

int main() {
    int n;

    // Taking input for the side length of the square
    printf("Enter the side length of the square: ");
    scanf("%d", &n);

    // Loop to print the square pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("* ");
        }
        printf("\n"); // Move to the next line after printing a row
    }

    return 0;
}
