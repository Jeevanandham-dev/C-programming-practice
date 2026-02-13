#include <stdio.h>
int main(){
    int n,N,count1=0,count2=0;
    scanf("%d",&n);
    int temp=n;
    while(temp>=1){
        scanf("%d",&N);
        if(N==0){
            count1++;
        }
        if(N==1){
            count2++;
        }
         --temp;
    }
    printf("successful: %d\n",count2);
    printf("Cancelled %d\n",count1);
    if(count2>=count1){
        printf("Safe");
    }
    else{
        printf("Risk");
    }
  
    
}