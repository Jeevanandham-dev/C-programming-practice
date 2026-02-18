#include <stdio.h>
int main(){
    int n,T;
    scanf("%d\n%d",&n,&T);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==T){
                printf("%d %d\n",arr[i],arr[j]);
            }
        }
    }
}