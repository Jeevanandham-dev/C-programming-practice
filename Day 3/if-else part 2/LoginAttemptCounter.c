#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<=3&&a>=0){
        printf("Login allowed");
    }
    else{
        printf("Account locked");
    }
}