#include <stdio.h>

void printNumberPyramid(int n) {
    // Loop for each row
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main() {
    int n;
    
    scanf("%d", &n);
    
    printNumberPyramid(n);
    return 0;
}
