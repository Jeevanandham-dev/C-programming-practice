#include <stdio.h>
void SI(int a,int b){
    if(a>b){
        printf("%d",a);
    }
    else if(a==b){
        printf("both are equal");
    }
    else{
        printf("%d",b);
    }
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    SI(a,b);
}