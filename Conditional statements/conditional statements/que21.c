#include<stdio.h>
int main(){
    int a, b;
    char calc;
    scanf("%d %c %d",&a,&calc,&b);  
    switch(calc){
        case '+':
            printf("%d\n",a+b);
            break;
        case '-':
            printf("%d\n",a-b);
            break;
        case '*':
            printf("%d\n",a*b);
            break;
        case '/':
            printf("%d\n",a/b);
            break;
        default:
            printf("Invalid operator\n");
    }
    
    return 0;
}
