#include <stdio.h>

int main() {
    int n, m, count = 0;
    scanf("%d %d", &n, &m);

    int arr[n][m];
    for (int i=0;i<n;i++) {
        for (int j=0; j<m;j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i=0;i<n;i++) {
        int isPalindrome = 1;
        for (int j=0;j<m/2-1;j++) {
            if (arr[i][j]!=arr[i][m-j]) {
                isPalindrome=0;
                break;
            }
        }
        if (isPalindrome) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
