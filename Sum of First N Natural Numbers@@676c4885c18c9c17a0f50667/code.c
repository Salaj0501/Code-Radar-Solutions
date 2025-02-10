#include <stdio.h>
int main(){
    int i;
    int table;
    int range;
    scanf("%d",&table);
    scanf("%d",&range);
    for (i=1;i<=range;i++){
        printf("%d\n",table*i);
    }
}