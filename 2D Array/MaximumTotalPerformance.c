#include <stdio.h>
#include <limits.h>
int main() {
    int n,m;
    scanf("%d\n%d", &n,&m);
    int arr[n][m];
    for (int i=0;i<n;i++) {
        for (int j=0;j<m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int maxSum = INT_MIN;  
    int maxCol = 0;
    for (int j=0;j<m;j++) {
        int colSum = 0;
        for (int i=0; i<n; i++) {
            colSum += arr[i][j];
        }
        if (colSum>maxSum) {
            maxSum = colSum;
            maxCol = j;
        }
    }
    printf("%d\n", maxCol);
    return 0;
}