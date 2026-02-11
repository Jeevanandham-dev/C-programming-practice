#include <stdio.h>
int main(){
    int n,m,count=0;
    scanf("%d\n%d",&n,&m);
    int min=m;
    for(int i=2;i<=n;i++){
        scanf("%d",&m);
        if(min>m){
            min=m;
        }
        if(m<210){
            count++;
        }
    }
    printf("Minimum vol: %d\n",min);
    printf("Total low Events: %d",count);    
}