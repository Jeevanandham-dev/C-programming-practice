#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int r=1;r<=n;r++){
        for(int sp=1;sp<=n-r;sp++){
            printf(" ");
        }
        for(int s=1;s<=(2*r)-1;s++){
            printf("*");
        }
        printf("\n");
    }
    for(int r=1;r<=n;r++){
        for(int sp=1;sp<=r-1;sp++){
            printf(" ");
        }
        for(int s=1;s<=(2*n-1)-2*(r-1);s++){
            printf("*");
        }
        printf("\n");
    }
}