#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a==6||a==7){
        printf("Weekend");
    }
    else if(a<1||a>7){
        printf("Invalid");
    }
    else{
        printf("weekday");
    }
}