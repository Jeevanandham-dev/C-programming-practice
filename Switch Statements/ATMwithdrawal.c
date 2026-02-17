#include<stdio.h>
int main(){
    int acctype,bal,amount;
    scanf("%d %d %d",&acctype,&bal,&amount);
    switch(acctype){
        case 1:
            if(bal>=amount){
                printf("Transaction Successful");
                bal=bal-amount;
                printf("Your balance: %d",bal);
        }
            else{
                printf("Low balance");    
        }
            break;
        case 2:
            if(amount<=5000 && amount<=bal){
                bal = bal-amount;
                printf("transaction succesful\nYour Balance:  %d", bal);
        }
            else{
                printf("Limit exceeded");
                }
               
            break;
        default:
                printf("Enter valid input");
    }
}