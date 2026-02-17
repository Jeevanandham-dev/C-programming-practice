#include <stdio.h>

int main() {
    int n,m,p,r,sum=0;
    scanf("%d %d\n", &n,&m); 
    for (int i=1;i<=m;i++) {
        scanf("%d", &p);  
        sum+=p;
    }
    r=n-sum;
    printf("remaining Battery: %d", r);
    return 0;
}
