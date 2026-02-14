#include  <stdio.h>
int main(){
    int n,N,max=0,count=0;
    scanf("%d\n",&n);
    int temp=n;
    while(temp>=1){
        scanf("%d",&N);
        if(N>5){
            count++;
        }
        if(N>max){
            max=N;
        }

        temp--;
    }
    printf("Max Usage: %d\n",max);
    printf("Surge Hours: %d",count);

}