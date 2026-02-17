#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    printf((a&(a-1))==0?"%d is power of 2":"%d is not a power of 2 ");
}