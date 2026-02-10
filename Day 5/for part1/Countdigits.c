#include <stdio.h>
int main(){
    int n;
    int count=0;
    int r;
    scanf("%d",&n);
    for(;n!=0;){
        r=n%10;
        count++;
        n=n/10;    
    }
    printf("%d",count);
    
    return 0;
}