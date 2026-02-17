#include<stdio.h>
int main(){
    int type;
    float DU;
    scanf("%d %f",&type,&DU);
    if(DU>5.0){
        printf("enter valid input");
    }
    switch(type){
        case 1:
        if(DU<=1.0){
            printf("normal Speed");
        }
        else{
            printf("Speed Reduced");
        }
            break;

        case 2:
            if(DU <=2.0){
                printf("Normal Speed");
        }
            else if(DU>2.0){
                printf("Extra charges Apply");
                }
            break;
        default:
                printf("Enter valid input");
    }
}