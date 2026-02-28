#include <stdio.h>
#include <math.h>

void Power(int n,int m){
printf("%.0lf",pow(n,m));

}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    Power(n,m);

}