#include <stdio.h>
int main(){
    int n,m,count=0,sum=0,c;
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&m);
        if(m>3){
            count++;
        }
        sum+=m;
    }
    c=sum*200;
    printf("%d\n",sum);
    printf("%d\n",c);
    printf("%d",count);
}