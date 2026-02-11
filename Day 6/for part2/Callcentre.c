#include <stdio.h>
int main(){
    int n,N,sum=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&N);
        sum+=N;
        if(N>40){
            count++;
        }

    }
    printf("%d\n",sum);
    printf("%d",count);
}