#include<stdio.h>
int main(){
    float a,b;
    char op;
    scanf("%f %f %c",&a,&b,&op);
    switch (op) {
        case '+':
            printf("%f",a+b);
            break;
        case '-':
            printf("%f",a-b);
            break;
        case '*':
            printf("%f", a * b);
            break;
        case '/':
            printf("%f",a/b);
            break;
    }
}