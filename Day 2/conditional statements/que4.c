#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d is greater",a);
    }
    else if(a==b){
        printf("both are equal");
    }
    else{
        printf("%d is greater",b);
    }
}