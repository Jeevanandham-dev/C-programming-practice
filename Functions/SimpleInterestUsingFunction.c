#include <stdio.h>
void SI(int p,int r,int t){
    float si =(p*r*t)/100;
    printf("%.4f",si);

}
int main(){
    int p,r,t;
    scanf("%d%d%d",&p,&r,&t);
    SI(p,r,t);

}