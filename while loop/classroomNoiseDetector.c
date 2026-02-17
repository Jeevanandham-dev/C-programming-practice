#include <stdio.h>
int main(){
    int n,N,count=0,max=0;
    scanf("%d",&n);
    int temp=n;
    while(temp>=1){
        scanf("%d",&N);
        if(max<N){
            max=N;
        }
        if(N>70){
            count++;
        }
        temp--;
    }
    printf("%d\n",count);
    printf("%d",max);
}