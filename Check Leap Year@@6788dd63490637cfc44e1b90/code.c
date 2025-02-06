#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    if (((a%400==0)||(a%4==0&&a%100!=0))){
        printf("Leap Year");
    }
    else {
        printf("Not a Leap Year")
    }
    return 0;
}