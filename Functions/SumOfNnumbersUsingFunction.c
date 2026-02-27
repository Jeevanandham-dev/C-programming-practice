#include <stdio.h>
int Reverse(int n){
    return n*(n+1)/2;
}
int main(){
    int n;
    scanf("%d",&n);
    int result = Reverse(n);
    printf("%d",result);
}