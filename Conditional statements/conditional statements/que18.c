#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a==100){
        printf("free");
    }
    else if((a>100)&&a<=300){
        printf("Rs.600");
    }
    else if(a>300&&a<=700){
        printf("Rs.1000");
    }
    else{
        printf("Rs.1500");
    }
}