#include <stdio.h>
int main(){
    int c,n,N,count=0,sum=0;
    scanf("%d\n%d",&c,&n);
    int temp=n;
    while(temp>=1){
        scanf("%d",&N);
        sum=sum+N;
        if(sum>=c*0.9){
            count++;
        }     
        --temp;
    }
    printf("Final occupied beds: %d\n",sum);
    printf("critical Hours: %d",count);
}