#include <stdio.h>

void printPalindromicTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        // Print newline without trailing space
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printPalindromicTriangle(n);
    return 0;
}
