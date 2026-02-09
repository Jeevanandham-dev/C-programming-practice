#include<stdio.h>
int main(){
    int code,exp,sal;
    scanf("%d %d",&code,&exp);
    switch(code){
        case 1:
        if(exp>=3){
            sal=50000+(exp*5000);
            printf("Salary: %d",sal);
        }
        else{
            printf("Salary: 50000");
        }
            break;
        case 2:
            if(exp>=3){
               sal=35000+(exp*5000);
            printf("Salary: %d",sal);
        }
            else{
                printf("Salary: 35000");
                }
               
            break;
        default:
                printf("Enter valid input");
    }
}