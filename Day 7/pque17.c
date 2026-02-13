#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        for(int sp=1;sp<=n-i;sp++) {
            printf(" ");
        }
        for(int j=1;j<=i;j++) {
            printf("%c",'A'+j);
        }
        for(int k=i-2;k>=0;k--) {
            printf("%c",'A'+k);
        }
        printf("\n");
    }
    return 0;
}
