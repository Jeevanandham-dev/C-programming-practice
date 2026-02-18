#include <stdio.h>
int main(){
    int n,Tsum=0,Rsum=0,Lsum=0;
    scanf("%d",&n);
    int arr[n];
    if(n==1){
        printf("0");
    }
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]); 
        Tsum=Tsum+arr[i];
    }
     
    for( int i=0;i<n;i++){
        Rsum=Tsum-Lsum-arr[i];
        if(Lsum==Rsum){
            printf("%d",i);
            return 0;
        }
        Lsum=Lsum+arr[i];
    }
    printf("%d",-1);
}