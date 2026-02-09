#include<stdio.h>
int main(){
    int amount,type;
    scanf("%d %d",&amount,&type);
    switch(type){
        case 1:
                printf("500");
                break;
        case 2:
            if(amount<1000){
                printf("delivery fee: 100");
        }
            else if(amount>=1000){
                printf("Free");
                }
               
            break;
        default:
                printf("Enter valid input");
    }
}