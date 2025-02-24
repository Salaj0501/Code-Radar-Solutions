#include <stdio.h>

int main() {
    int n;

    // Taking input for number of rows
    
    scanf("%d", &n);

    // Loop to print the pyramid pattern
    for (int i = 1; i <= n; i++) {
        // Printing spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Printing stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n"); // New line after each row
    }

    return 0;
}
