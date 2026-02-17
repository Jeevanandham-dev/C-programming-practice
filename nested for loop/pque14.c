#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char m;
    for(int i=1;i<=n;i++){
        m='A';
        for(int j=1;j<=i;j++){
            printf("%c ",m++);
        }
        printf("\n");
    }
}