#include<stdio.h>
int main(){
    int  user,T;
    scanf("%d %d",&user,&T);
    switch(user){
        case 1:
            printf("Full access anytime");
            break;
            
        case 2:
            if(T>=9 && T<=18){
            printf("Limited Access");
        }
            else {
                printf("Access Denied");
                }
            break;
        default:
                printf("Enter valid input");
    }
}