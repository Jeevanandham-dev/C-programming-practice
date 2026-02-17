#include<stdio.h>
int main(){
    int class,age;
    scanf("%d %d",&class,&age);
    int bill;
    switch(class){
        case 1:
            if(age<=12){
                bill= 300-(300*0.5);
                printf("%d",bill);
        }
            else if(age>=60){
                bill= 300-(300 * 0.33);    
                printf("%d",bill);
        }
        else{
            printf("300");
        }
            break;
        case 2:
            if(age<=12){
                bill=1000-(1000*0.5);
                printf("%d",bill);
        }
            else{
                bill=1000;
                printf("%d",bill);}
               
            break;
        default:
                printf("Enter valid input");
    }
}