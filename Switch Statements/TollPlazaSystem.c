#include<stdio.h>
int main(){
    int type,trip;
    scanf("%d %d",&type,&trip);
    if(trip>30){
        printf("only 30 trips");
    }
    switch(type){
        case 1:
        if(trip==1){
            printf("100");
        }
        else if(trip>=2|| trip<=10){
            printf("800(monthly pass)");
        }
        else{
            printf("800(still monthly pass)");
        }
            break;

        case 2:
                printf("%d",trip*240);
            break;
        default:
                printf("Enter valid input");
    }
}