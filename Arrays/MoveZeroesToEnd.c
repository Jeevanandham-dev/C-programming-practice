#include <stdio.h>
int main(){
    int n,j=0;
    scanf("%d",&n);
    int arr[n],temp[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]!=0){
            temp[j]=arr[i];
            j++;
        }
    }
    for(int i=j;i<n;i++){
        temp[i]=0;
    }
    for(int i=0;i<n;i++){
        printf("%d ",temp[i]);
    }
}