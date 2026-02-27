#include <stdio.h>
int SumOfDigits(int n){
    int sum=0;
    while(n!=0){
        sum=sum+n%10;
        n/=10;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int result=SumOfDigits(n);
    printf("%d",result);
}