#include <stdio.h>
int main(){
    int n,N,count=0;
    scanf("%d\n",&n);
    int temp=n;
    while(temp>=1){
        scanf("%d",&N);
        if(N==0){
            count++;
        }
         --temp;
    }
    printf("Inactive weeks: %d\n",count);
    if(count>3){
        printf("high");
    }
    else{
        printf("low");
    }
  
    
}