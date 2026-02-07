#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<=35){
        printf("Fail");
    }
    else if(a>35&&a<75){
        printf("pass");
    }
    else if(a>=75&&a<=100){
        printf("Distinction");
    }
    else{
        printf("Enter valid input");
    }
}