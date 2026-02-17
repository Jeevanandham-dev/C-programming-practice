#include<stdio.h>
int main(){
    int type,age;
    scanf("%d %d",&type,&age);
    if(age>=0 && age<=20){
    switch(type){
        case 1:
        if(age<=5){
            printf("1500");
        }
        else if(age>5){
            printf("2500");
        }
        else{
            printf("Enter correct season");
        }
            break;

        case 2:
            if(age<=5){
                printf("4000");
        }
            else if(age>5){
                printf("6000");
                }
            break;
        default:
                printf("Enter valid input");
    }}
}