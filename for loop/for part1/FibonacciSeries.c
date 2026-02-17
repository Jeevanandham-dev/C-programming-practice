#include <stdio.h>
int main() {
    int n; 
    int first=0; 
    int second = 1;
    int next;
    scanf("%d",&n);
    printf("%d %d ", first, second);
    for (int i=3;i<=n;i++) {
        next = first + second;   
        printf("%d ", next);
        first = second;
        second = next;
    }

    return 0;
}
