#include <stdio.h>
int main(){
    int init,n,m,count=0,temp;
    scanf("%d\n%d\n",&init,&n);
    temp=init;
    for(int i=1;i<=n;i++){
        scanf("%d",&m);
        temp=temp-m;
        if(temp<5000){
            count++;
        }
    }
    printf("Remaining cash:%d\n",temp);
    printf("risk count: %d",count);
}