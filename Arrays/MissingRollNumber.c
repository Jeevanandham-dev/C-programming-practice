#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n-1];
    for(int i=0;i<n-2;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-2;i++){
        if(arr[i+1]!=arr[i]+1){
            printf("%d ",arr[i]+1);
        }   
}

}
    

    

