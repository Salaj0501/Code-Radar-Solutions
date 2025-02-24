#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {         // Loop for rows (reverse order)
        for (int j = 0; j < i; j++) {     // Loop for columns
            printf("%c", 'A' + j);        // Print alphabet
            if (j != i - 1) {             // Avoid trailing space
                printf(" ");
            }
        }
        printf("\n");                     // New line after each row
    }

    return 0;
}
