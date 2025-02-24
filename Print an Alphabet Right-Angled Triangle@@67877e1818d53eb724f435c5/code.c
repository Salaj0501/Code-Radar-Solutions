#include <stdio.h>

void printAlphabetTriangle(int n) {
    // Loop for each row
    for (int i = 1; i <= n; i++) {
        char letter = 'A';
        // Print alphabets from 'A' up to the row number
        for (int j = 1; j <= i; j++) {
            printf("%c ", letter);
            letter++;
        }
        printf("\n");
    }
}

int main() {
    int n;
    
    scanf("%d", &n);
    
    printAlphabetTriangle(n);
    return 0;
}
