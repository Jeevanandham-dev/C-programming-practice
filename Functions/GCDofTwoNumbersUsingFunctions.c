#include <stdio.h>
#include <math.h>
#include <limits.h>
void GCD(int n,int m){
    int min,max;
    int gcd=1;
    if(n<m){
        min=n;
        max=m;
    }
    else{
        min=m;
        max=n;
    }
    for(int i=1;i<=min;i++){
        if(min%i==0 && max%i==0){
            if(i>gcd){
                gcd=i;
            }
        }
    }
    printf("%d",gcd);

}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    GCD(n,m);

}