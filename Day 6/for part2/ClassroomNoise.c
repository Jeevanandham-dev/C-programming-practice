#include <stdio.h>
int main(){
    int n,m,count=0,max=0;
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&m);
        if(max<m){
            max=m;
        }
        if(m>70){
            count++;
        }
    }
    printf("%d\n",max);
    printf("%d",count);
}