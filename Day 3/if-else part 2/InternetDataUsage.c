#include<stdio.h>
int main(){
    float a;
    scanf("%f",&a);
    if(a>=2.5){
        printf("Data limit exceeded");
    }
    else{
        printf("Within the data limit");
    }
}