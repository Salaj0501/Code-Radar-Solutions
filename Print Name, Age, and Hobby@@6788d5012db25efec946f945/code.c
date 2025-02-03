#include <stdio.h>
int main() {
    char a[100];
    int b;
    char c[100];
    scanf("%s %s %d",&a,&c,&b);
    printf("Name: %s\nAge: %d\nHobby: %s",a,b,c);
    return 0;
}