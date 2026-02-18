 #include <stdio.h>
 int main(){
    int n,j=0;
    scanf("%d",&n);
    int arr[n],temp[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[n-1];
    temp[j++]=max;
    for(int i=n-2;i>=0;i--){
        if(arr[i]>max){
            max=arr[i];
            temp[j++]=max;
        }
        
    }
    for(int i=j-1;i>=0;i--){
        printf("%d ",temp[i]);
    }
 }