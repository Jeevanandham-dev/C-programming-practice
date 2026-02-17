#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>=85 && b<=300000){
        printf("Scholarship eligile");
    }
    else{
        printf("scholarship not eligible");
    }
}