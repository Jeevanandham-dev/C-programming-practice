#include<stdio.h>
int main(){
    int type,p;
    scanf("%d %d",&type,&p);
    switch(type){
        case 1:
            printf("%d",p*10);
            break;

        case 2:
                printf("%d",p*20);
                break;
        default:
                printf("%d",p*20);
    }
}