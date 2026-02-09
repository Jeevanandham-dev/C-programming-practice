#include<stdio.h>
int main(){
    int atmp,m;
    scanf("%d %d",&atmp,&m);
    switch(atmp){
        case 1:
        if(m>=80){
            printf("Excellent");
        }
        else{
            printf("Not Qualified");
        }
            break;

        case 2:
            if(m>=60){
                printf("good");
        }
            else {
                printf("Not qualified");
                }
            break;
            case 3:
            printf("Need Improvement");
            break;

        default:
                printf("Enter valid input");
    }
}