#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<20){
        printf("Low battery");
    }
    else{
        printf("Battery ok");
    }
}