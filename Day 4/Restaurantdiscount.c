#include<stdio.h>
int main(){
    int type,amount,bill;
    scanf("%d %d",&type,&amount);
    switch(type){
        case 1:
            bill=amount-(amount*0.05);
            printf("%d",bill);
            break;

        case 2:
        bill =amount-(amount*0.15);
            printf("%d",bill);
            break;

        default:
                printf("Enter valid input");
    }
}