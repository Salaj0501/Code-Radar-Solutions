#include <stdio.h>

int main() {
    int num, n;
    
    // Taking input: the number and the bit position
    scanf("%d %d", &num, &n);
    
    // Clearing the nth bit using bitwise AND with NOT mask
    num = num & ~(1 << n);
    
    // Printing the modified number
    printf("%d\n", num);
    
    return 0;
}
