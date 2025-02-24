#include <stdio.h>

int main() {
    int n;

    // Taking input for the number of rows
    
    scanf("%d", &n);

    // Loop to print the right-angled triangle with numbers
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
