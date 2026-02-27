#include <stdio.h>
int Reverse(int n){
    int count=0;
    while(n!=0){
        count++;
        n/=10;
    }
    return count;
}
int main(){
    int n;
    scanf("%d",&n);
    int result = Reverse(n);
    printf("%d",result);
}