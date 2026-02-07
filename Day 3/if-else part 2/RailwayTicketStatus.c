#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a==5){
        printf("Confirmed");
    }
    else if(a==0){
        printf("waiting list");
    }
    else if(a==1){
        prinf("confirmed");
    }
    else{
        printf("enter valid input");
    }
}