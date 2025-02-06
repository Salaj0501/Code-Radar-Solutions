#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int price;
    int sell;
    scanf("%d %d",&price,&sell);
    if (price>sell){
        printf("Loss");
    }
    else {
        printf("Profit")
    }
    return 0;
}