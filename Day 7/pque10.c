<<<<<<< HEAD
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            printf("* ");
        }
        printf("\n");
        if(i==n){
            for(int i=n;i>=1;i--){
                for(int j=1;j<=i;j++){
                    printf("* ");
                }
                printf("\n");
            }
        }
    }
=======
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            printf("* ");
        }
        printf("\n");
        if(i==n){
            for(int i=n;i>=1;i--){
                for(int j=1;j<=i;j++){
                    printf("* ");
                }
                printf("\n");
            }
        }
    }
>>>>>>> 7b9c8aaf449a20ceda2fcfe61a8af66264a21258
}