#include<stdio.h>
int main(){
    int type,units;
    scanf("%d %d",&type,&units);
    switch(type){
        case 1:
        if(units<=30){
            printf("%d",30*5);
        }
        else if(units>30){
            int Dunits = units-30;
            printf("%d",(8*Dunits)+(30*5));
        }
            break;

        case 2:
                printf("%d",units*10);
            break;

        default:
                printf("Enter valid input");
    }
}