#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if (toupper(ch)==A||E||I||O||U){
        printf("Vowel");
    }
    return 0;
}