#include<stdio>
int main(){
    char a;
    scanf("%c",%a);
    if (a>="A"&&a<="Z"){
        printf("Uppercase");
    }
    elseif (a>="a"&&"z"){
        printf("Lowercase");
    }
    else {
        printf("Invalid");
    }
}