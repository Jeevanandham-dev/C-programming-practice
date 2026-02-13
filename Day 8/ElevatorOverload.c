#include <stdio.h>
int main(){
    int n,N,mw,sum=0,count=0;
    scanf("%d\n%d",&mw,&n);
    int temp=n;
    while(temp>=1){
        scanf("%d",&N);
        sum=sum+N;
        if(sum<=mw){
            count++;
        }
         --temp;
    }
    printf("Passengers allowed: %d\n",count);
    if(sum>mw){
        printf("overload");
    }
    else{
        printf("not overload");
    }
  
    
}