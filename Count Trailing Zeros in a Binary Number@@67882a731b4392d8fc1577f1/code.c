#include <stdio.h>

int countTrailingZeros(int n) {
    int count = 0;
    
    if (n == 0) return 0; // Special case: 0 has infinite trailing zeros

    while ((n & 1) == 0) { // Check if the last bit is 0
        count++;
        n >>= 1; // Right shift to check the next bit
    }

    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", countTrailingZeros(n));
    return 0;
}
