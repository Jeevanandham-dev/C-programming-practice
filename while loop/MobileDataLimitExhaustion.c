#include <stdio.h>
int main(){
    int n,N,count=0,TD,td=0,rd;
    scanf("%d\n%d",&TD,&n);
    int temp=n;
    rd=TD;
    while(temp>=1){
        scanf("%d",&N);
        td=td+N;
        if(td<=TD){
            count++;
            rd=rd-N;
        }
         --temp;
    }
    printf("%d\n",count);
    printf("%d",rd);
    
}