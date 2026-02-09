#include<stdio.h>
int main(){
    int cat,d;
    scanf("%d %d",&cat,&d);
    switch(cat){
        case 1:
        if(d<=30){
            printf("Eligible");
        }
        else if(d>=30){
            printf("eligiblr with extra fee");
        }
            break;

        case 2:
            if(d<=30){
                printf("Eligible");
        }
            else {
                printf("Not Eligible");
                }
            break;
        default:
                printf("Enter valid input");
    }
}