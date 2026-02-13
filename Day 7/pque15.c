#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char m;
    for(int i=1;i<=n;i++){
        m='A';
        for(int j=n;j>=i;j--){
            printf("%c ",m++);
        }
        printf("\n");
    }
}