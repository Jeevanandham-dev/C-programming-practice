#include<stdio.h>
int main(){
    int type,bill;
    scanf("%d",&type);
    switch(type){
        case 1:
            bill=1200;
            printf("%d",bill);
            break;

        case 2:
                bill= 800;
                printf("%d",bill);
            break;
        case 3:
            bill= 500;
            printf("%d",bill);
            break;

        default:
                printf("Enter valid input");
    }
}