#include <stdio.h>

int main() {
    unsigned int num;
    int count = 0;

    // Taking input
    scanf("%u", &num);

    // Check each bit from the most significant bit (MSB)
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1)
            break;
        count++;
    }

    // Printing the count of leading zeros
    printf("%d\n", count);

    return 0;
}
