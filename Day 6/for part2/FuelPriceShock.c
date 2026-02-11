#include <stdio.h>
int main() {
    int n, p;
    int h=0;
    int count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d", &p);
        if (p>h) {
            h=p;
        }
        if (p>100) {
            count++;
        } 
    }
    printf("Highest Price: %d\n", h);
    printf("High Price Days: %d\n", count);

    return 0;
}
