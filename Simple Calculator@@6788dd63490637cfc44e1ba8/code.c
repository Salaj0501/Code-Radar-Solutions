#include<stdio.h>
int main(){
    float a,b;
    char op;
    scanf("%f %f %c",&a,&b,&op);
    switch (op) {
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d", a * b);
            break;
        case '/':
            if (b == 0) {
                printf("error");
            } else {
                printf("%d", a / b);
            }
            break;
        default:
            printf("error");
    }
}