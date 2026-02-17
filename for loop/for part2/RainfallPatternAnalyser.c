#include <stdio.h>

int main() {
    int n,m,count=0,sum=0;
    scanf("%d\n", &n); 
    for (int i=1;i<=n;i++) {
        scanf("%d", &m);  
        if (m > 50) {
            count++;
        }
        sum += m;
    }
    printf("Total rainfall: %d\n", sum);
    printf("heavy rainfall Days: %d\n", count);
    return 0;
}
