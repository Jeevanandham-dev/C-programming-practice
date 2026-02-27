#include <stdio.h>
#include <limits.h>
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    int min1 = INT_MAX, min2 = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            int val=arr[i][j];
            if (val<min1) {
                min2 =min1;
                min1=val;
            } else if(val>min1&&val<min2) {
                min2=val;
            }
        }
    }
    if (min2==INT_MAX) {
        printf("all values equal\n");
    } else {
        printf("%d\n", min2);
    }
    return 0;
}
