#include <stdio.h>

int main() {
    int num, pos = 0;
    
    // Taking input: the number
    scanf("%d", &num);
    
    // Finding the position of the lowest set bit
    while ((num & 1) == 0) {
        num >>= 1;
        pos++;
    }
    
    // Printing the position (0-based)
    printf("%d\n", pos);
    
    return 0;
}
