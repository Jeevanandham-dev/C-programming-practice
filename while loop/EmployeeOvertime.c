#include <stdio.h>
int main(){
    int n,N,sum=0,count=0;
    scanf("%d",&n);
    int temp=n;
    while(temp>=1){
        scanf("%d",&N);
        sum+=N;
        if(N>4){
            count++;
        }
        --temp;
    }
    printf("Total overtime: %d\n",sum);
    printf("Burnout Days: %d",count);
}