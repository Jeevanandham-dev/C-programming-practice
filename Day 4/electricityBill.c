#include<stdio.h>
int main(){
    int units, ct;
    scanf("%d %d",&ct,&units);
    int bill;
    switch(ct){
        case 1:
            if(units<=100){
                bill=3*units;
        }
            else{
                int Dunits=100*3;
                bill=(units-100)*5+Dunits-80;    
        }
                printf("%d",bill);
            break;
        case 2:
            if(units<=100){
                bill=7*units;
        }
            else{
                int Dunits=100*7;
                bill=(units-100)*10+Dunits;
                printf("%d",bill);}
               
            break;
        default:
                printf("Enter valid input");
    }
}