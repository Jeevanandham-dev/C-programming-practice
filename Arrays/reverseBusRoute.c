#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],arr1[n],temp=n;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        arr1[i]=arr[temp-1];
        temp--;
        printf("%d ",arr1[i]);     
    }
   
    
}