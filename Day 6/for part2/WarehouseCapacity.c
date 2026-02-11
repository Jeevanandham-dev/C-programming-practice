#include <stdio.h>
int main(){
    int n,c,N,count=0,rc,sum=0;
    scanf("%d\n%d\n",&c,&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&N);
        sum+=N;
        if(sum>c){
            count++;
        } 
    }
    rc=c-sum;
    printf("%d\n",rc);
    printf("%d",count);

}