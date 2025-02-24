#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {           // Loop for rows
        for (int j = 0; j < i; j++) {        // Loop for columns
            printf("%d", (i + j) % 2);       // Print alternating 1 and 0
            if (j != i - 1) {                // Avoid trailing space
                printf(" ");
            }
        }
        printf("\n");                        // New line after each row
    }

    return 0;
}
