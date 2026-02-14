#include <stdio.h>
int main(){
    int ac,n,N,sum=0,count=0;
    scanf("%d\n%d",&ac,&n);
    int temp=n;
    int r=ac;
    while(temp>=1){
        scanf("%d",&N);
        sum=sum+N;
        if(sum<=ac){
            count++;
            r=r-N;
        }
        --temp;
    }
    printf("Succesful withdrawals: %d\n",count);
    printf("Remaining cash %d",r);
}