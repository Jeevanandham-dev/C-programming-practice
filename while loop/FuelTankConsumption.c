#include <stdio.h>
int main(){
    int f,n,N,sum=0,count=0,rf;
    scanf("%d\n%d",&f,&n);
    int temp=n;
    while(temp>=1){
        scanf("%d",&N);
        sum=sum+N;
        if(sum<=f){
            count++;
        }
        else if(sum>f){
            rf=N;
        }
            --temp;
    }
    printf("completed trips: %d\n",count);
    printf("remaining fuel: %d",rf);
  
    
}