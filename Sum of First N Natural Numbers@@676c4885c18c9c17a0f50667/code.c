#include <stdio.h>
int main() {
    int i,sum=0;
    int range;
    scanf("%d",&range);
    for (i=1;i<=range;i++){
        sum+=i;
    }
    printf("%d",sum);
}