#include <stdio.h>
int main(){
    int n,m,sum=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&m);
        if(m>50000){
            count++;
        }
        sum+=m;
    }
    printf("Total revenue: %d\n",sum);
    printf("Target days: %d",count);    
}