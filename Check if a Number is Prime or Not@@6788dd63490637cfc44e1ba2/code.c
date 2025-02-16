#include <stdio.h>
int main(){
    int i,c=0,a;
    scanf("%d",&a);
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {   
            c++;
            break;
        }
    }
    if(c==0)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}

