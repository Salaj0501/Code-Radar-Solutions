#include <stdio.h>

int main() {
    int n;

    // Taking input for number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop to print the mirrored right-angled triangle
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
