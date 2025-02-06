#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    bits=sizeof(int)*8;
    int mask=1<<(bits-1);
    if (num&mask){
        printf("Set");
    }
    else {
        printf("Not Set")
    }
    return 0;
}