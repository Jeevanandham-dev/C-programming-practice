#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<1000){
        printf("Low balance");
    }
    else{
        printf("Sufficient balance");
    }
}