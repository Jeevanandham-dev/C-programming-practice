#include<stdio.h>
int main(){
    int type,T;
    scanf("%d %d",&type,&T);
    switch(type){
        case 1:
        if(T>=18){
            printf("%d",200);
        }
        else{
            printf("150");
        }
            break;

        case 2:
            if(T>=18){
                printf("%d",300);
        }
            else {
                printf("%d",250);
                }
            break;
        default:
                printf("Enter valid input");
    }
}