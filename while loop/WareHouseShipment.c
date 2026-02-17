#include  <stdio.h>
int main(){
    int n,N,sum=0,count=0;
    scanf("%d\n",&n);
    int temp=n;
    while(temp>=1){
        scanf("%d",&N);
        sum=sum+N;
        if(N>2){
            count++;
        }
        temp--;
    }
    printf("Total Delay: %d\n",sum);
    printf("Delayed Days: %d",count);

}