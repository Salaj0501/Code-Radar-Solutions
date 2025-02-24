#include <stdio.h>

void printAlphabetPyramid(int n) {
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        // Print alphabets from 'A' to the current row character
        for (int j = 0; j <= i; j++) {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }
}

int main() {
    int n;
    
    scanf("%d", &n);
    
    printAlphabetPyramid(n);
    return 0;
}
