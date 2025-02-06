#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if ((toupper(ch)==A)||(toupper(ch)==E)||(toupper(ch)==I)||(toupper(ch)==O)||(toupper(ch)==U)){
        printf("Vowel");
    }
    else {
        printf("Consonant");
    }
    return 0;
}