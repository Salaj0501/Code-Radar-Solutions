#include <stdio.h>

int main() {
    int num, n;
    
    // Taking input: the number and the bit position
    scanf("%d %d", &num, &n);
    
    // Toggling the nth bit using XOR
    num = num ^ (1 << n);
    
    // Printing the updated number
    printf("%d\n", num);
    
    return 0;
}
