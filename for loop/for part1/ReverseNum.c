#include <stdio.h>
int main(){
    int n;
    int rev=0;
    int r;
    scanf("%d",&n);
    for(;n!=0;n=n/10){
     r=n%10;
     rev=(rev*10)+r;     
    }
    printf("%d",rev);
    
    return 0;
}