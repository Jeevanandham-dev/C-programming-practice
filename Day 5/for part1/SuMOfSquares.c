#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    for(;n!=0;n--){
        sum=sum+(n*n);
    }
    printf("%d",sum);
}