#include<stdio.h>
int main(){
    int type,kg;
    scanf("%d %d",&type,&kg);
    switch(type){
        case 1:
            printf("%d",kg*300);
            break;

        case 2:
            if(kg<=3){
                printf("free");
        }
            else {
                printf("%d",kg*300-900);
                }
            break;
        default:
                printf("Enter valid input");
    }
}