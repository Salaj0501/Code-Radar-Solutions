#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if (a>="A"&& a<="Z"){
        printf("Uppercase");
    }
    elseif (a>="a"&& a<="z"){
        printf("Lowercase");
    }
    else {
        printf("Invalid");
    }
}