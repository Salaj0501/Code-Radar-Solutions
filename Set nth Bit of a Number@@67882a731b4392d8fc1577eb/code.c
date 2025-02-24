#include <stdio.h>

int main() {
    int num, pos;
    scanf("%d %d", &num, &pos);

    // Set the nth bit to 1
    num = num | (1 << pos);

    printf("%d\n", num);
    return 0;
}
