#include <stdio.h>
int main(){
    int plan;
    scanf("%d",&plan);
    switch(plan){
        case 0:
        case 1:
        case 2:
        printf("fail");
        case 3:
        printf("Supplementary");
        break;
        case 4:
        printf("F");
        break;
        case 5:
        printf("E");
        break;
        case 6:
        printf("D");
        break;
        case 7:
        printf("C");
        break;
        case 8:
        printf("B");
        break;
        case 9:
        case 10:
        printf("A");
        break;
        default:
        printf("Enter valid marks");
    }
}