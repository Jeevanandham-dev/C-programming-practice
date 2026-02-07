#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%100==0){
        printf("multiple of 100");
    }
    else{
        printf("not multiple of 100");
    }
}