#include <stdio.h>
int main(){
    int n,N,count=0,Ibal;
    scanf("%d\n%d",&n,&Ibal);
    int temp=n;
    int ibal=Ibal;
    while(temp>=1){
        scanf("%d",&N);
        ibal=ibal+N;
        if(ibal<2000){
            count++;
        }
         --temp;
    }
    printf("%d\n",ibal);
    printf("%d",count);
    
}