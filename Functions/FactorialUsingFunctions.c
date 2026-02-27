#include <stdio.h>
long Factorial(int n){
    long fact=1;
    while(n>0){
       fact=fact*n;
       n--;
    }
    return fact;
}
int main(){
    int n;
    scanf("%d",&n);
    long result=Factorial(n);
    printf("%ld",result);
}