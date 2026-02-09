#include <stdio.h>
int main(){
    int a,m;
    scanf("%d %d",&a,&m);
    if(a<75){
        printf("Fail");
    }else{
    switch(m/10){
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:  
        printf("fail");
        break;
        case 5:
        case 6:
        case 7:
        if(m<75){
        printf("pass");}
        else{
            printf("Distinction");
        }
        break;
        case 8:
        case 9:
        case 10:
        printf("Distinction");
        break;
        default:
        printf("Enter valid marks");
    }
}}