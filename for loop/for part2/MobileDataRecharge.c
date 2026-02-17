#include <stdio.h>
int main(){
    int totD,n,m,count=0,diff;
    scanf("%d\n%d\n",&totD,&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&m);
       if(totD-m>=0){
         totD = totD-m;
        count++;
       }
    }
    printf("%d\n",totD);
    printf("%d",count);

}