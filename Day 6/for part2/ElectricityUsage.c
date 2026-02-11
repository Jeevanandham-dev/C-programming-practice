#include <stdio.h>
int main() {
    int n,m,count=0,sum=0;
    scanf("%d\n", &n); 
    for (int i=1;i<=n;i++) {
        scanf("%d", &m);  
        sum += m;
    }
    printf("Units used :%d", sum);
    return 0;
}
