#include <stdio.h>
int main() {
    int n,m,count=0,sum=0;
    scanf("%d\n", &n); 
    for (int i=1;i<=n;i++) {
        scanf("%d", &m);  
        sum += m;
    }
    if(sum>10000){
        printf("Limit Exceeded");
    }
    else{
    printf("Approved");}
    return 0;
}
