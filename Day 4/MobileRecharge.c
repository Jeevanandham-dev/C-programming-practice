#include<stdio.h>
int main(){
    int plan, pm;
    scanf("%d %d",&plan,&pm);
    int bill;
    switch(plan){
        case 1:
            if(pm==11 || pm==12 ){
                bill=199-20;
                printf("%d",bill);
        }
            else{
                
                bill=199;    
                printf("%d",bill);
        }
            break;
        case 2:
            if(pm==11 || pm==12){
                bill= 399-20;
                printf("%d",bill);
        }
            else{
                bill= 399;
                printf("%d",bill);}
               
            break;
        default:
                printf("Enter valid input");
    }
}