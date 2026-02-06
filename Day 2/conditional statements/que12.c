#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=90 && a<=100){
        printf("grade A");
    }
    else if(a>=75 && a<90){
        printf("grade B");
    }
    else if(a>=50 && a<75){
        printf("grade C");
    }
    else if(a<50){
        printf("grade D");
    }
    else{
        printf("enter valid mark");
    }
}