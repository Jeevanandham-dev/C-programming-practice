#include <stdio.h>
void Calculator(int n,int m,char c){
    switch(c){
        case '+':
        printf("%d",n+m);
        break;
        case '-':
        printf("%d",n-m);
        break;
        case '*':
        printf("%d",n*m);
        break;
        case '/':
        printf("%d",n/m);
        break;
        default:
        printf("Enter valid input");

}
    }
int main(){
    int n,m;
    char c;
    scanf("%d %d %c",&n,&m,&c);
    Calculator(n,m,c);
}