#include <stdio.h>

int main() {
    int n,m,count=0,sum=0,avg;
    scanf("%d\n", &n); 
    for (int i=1;i<=n;i++) {
        scanf("%d", &m);  
        if (m < 40) {
            count++;
        }
        sum += m;
        avg=sum/n;
    }
    printf("Average Score: %d\n", avg);
    printf("failed Subjects: %d\n", count);
    return 0;
}
