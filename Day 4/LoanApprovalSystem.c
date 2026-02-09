#include<stdio.h>
int main(){
    int type,cd;
    scanf("%d %d",&type,&cd);
    if(cd>=300 && cd<=900){
    switch(type){
        case 1:
        if(cd >= 700){
            printf("Approved");
        }
        else if(cd>=650 && cd <700){
            printf("manual review");
        }
        else{
            printf("rejected");
        }
            break;

        case 2:
            if(cd>=700){
                printf("Approved");
        }
            else {
                printf("rejected");
                }
            break;
        default:
                printf("Enter valid input");
    }
}
}