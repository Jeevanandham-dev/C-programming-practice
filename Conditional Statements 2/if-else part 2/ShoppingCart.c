#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>0&&a<499){
        printf("Delivery charges apply");
    }
    else{
        printf("Free delivery");
    }
}