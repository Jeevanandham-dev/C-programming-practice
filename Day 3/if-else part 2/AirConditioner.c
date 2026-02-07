#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<=18&&a>=0){
        printf("heating Mode");
    }
    else if(a>18&&a<=25){
        printf("Normal mode");
    }
    else{
        printf("cooling mode");
    }
}