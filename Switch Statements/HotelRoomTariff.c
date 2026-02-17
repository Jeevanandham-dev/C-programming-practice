#include<stdio.h>
int main(){
    int type;
    char season;
    scanf("%d %c",&type,&season);
    switch(type){
        case 1:
        if(season == 'A'){
            printf("2500");
        }
        else if(season == 'B'){
            printf("2000");
        }
        else{
            printf("Enter correct season");
        }
            break;

        case 2:
            if(season=='C'){
                printf("4000");
        }
            else if(season=='D'){
                printf("3000");
                }
            break;
        default:
                printf("Enter valid input");
    }
}