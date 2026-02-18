// for sorted array only
#include <stdio.h>
int main(){
    int n,j=0;
    scanf("%d",&n);
    int arr[n],temp[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[i+1]){
            temp[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<j;i++){
        printf("%d ",temp[i]);
    }


}