#include <stdio.h>
int main(){
    int n,N,count=0,strk=0;
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
        if(count>strk){
            strk=count;
           }
        --temp;
    }
    printf("Longest failure strk: %d",strk);
  
    
}