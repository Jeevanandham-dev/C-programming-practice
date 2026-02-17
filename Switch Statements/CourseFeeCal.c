#include<stdio.h>
int main(){
    int type;
    char season;
    scanf("%d %c",&type,&season);
    switch(type){
        case 1:
        if(season == 'R'){
            printf("5000");
        }
        else if(season == 'S'){
            printf("3000");
        }
        else{
            printf("Enter correct season");
        }
            break;

        case 2:
            if(season=='R'){
                printf("9000");
        }
            else if(season=='S'){
                printf("7000");
                }
            break;
        default:
                printf("Enter valid input");
    }
}