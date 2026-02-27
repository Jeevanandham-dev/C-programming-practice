#include <stdio.h>
void LeapYear(int n){
    if(n%400==0 || (n%100!=0 && n%4==0)){
        printf("leap year");
    }
    else{
        printf("Not a leap year");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    LeapYear(n);
}