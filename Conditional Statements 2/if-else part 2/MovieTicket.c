#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<12&&a>0){
        printf("Discount ticket");
    }
    else{
        printf("Regular ticket");
    }
}