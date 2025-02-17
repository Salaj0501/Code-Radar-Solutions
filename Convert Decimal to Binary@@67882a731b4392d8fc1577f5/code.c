// Your code here...
#include <stdio.h>
int main(){
    int a,i,flag=0;
    for(i=31;i>=0;i--){
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