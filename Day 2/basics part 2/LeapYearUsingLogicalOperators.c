#include <stdio.h>
int main(){
    int Y;
    scanf("%d",&Y);
    if((Y%4==0 && Y%100!=0) || (Y%400==0)){
    printf("Leap year");
}
    else{
        printf("Not a Leap year");
    }
}