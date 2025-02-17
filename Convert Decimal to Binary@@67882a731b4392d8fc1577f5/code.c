// Your code here...
#include <stdio.h>
int main(){
    int a,i,flag;
    for(i=1;i<=a;i++){
        if(a&(1<<i)){
            flag=1;
        }
        if(flag){
            printf("%d",(a&(1<<i))?1:0);
        }}
    
    if(!flag)
        printf("0");
    
    return 0;
}