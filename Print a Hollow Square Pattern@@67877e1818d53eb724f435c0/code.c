#include <stdio.h>

int main() {
    int n;

    // Taking input for the side length of the square
    
    scanf("%d", &n);

    // Loop to print the hollow square pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print '*' if it's the first or last row, or the first or last column
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); // Move to the next line after printing a row
    }

    return 0;
}
