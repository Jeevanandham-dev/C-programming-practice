#include <stdio.h>
int main(){
    int n,N,count=0,max=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&N);
        if(N>max){
            max=N;
        }     
        if(N>140){
            count++;
        }


    }
    printf("%d\n",max);
    printf("%d",count);
}