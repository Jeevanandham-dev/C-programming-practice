#include<stdio.h>
int main(){
    int type,m,bill;
    scanf("%d %d",&type,&m);
    switch(type){
        case 1:
            bill=m*1;
            printf("%d",bill);
            break;

        case 2:
                bill= m*3;
                printf("%d",bill);
            break;
        case 3:
            bill= m*10;
            printf("%d",bill);
            break;

        default:
                printf("Enter valid input");
    }
}