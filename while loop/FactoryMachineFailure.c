#include <stdio.h>
int main(){
    int n,N,count=0,streak=0;
    scanf("%d",&n);
    int temp=n;
    while(temp>=1){
        scanf("%d",&N);
        if(N==0){
            count++;
        }
        else{
            count=0;
        }
        if(count>streak){
            streak=count;
        }
         --temp;
    }
    printf("%d",streak);
    
}