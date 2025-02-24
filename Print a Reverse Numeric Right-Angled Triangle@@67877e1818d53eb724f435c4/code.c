#include <stdio.h>

void printReverseNumericTriangle(int n) {
    // Loop for each row
    for (int i = n; i >= 1; i--) {
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
    
    printReverseNumericTriangle(n);
    return 0;
}
