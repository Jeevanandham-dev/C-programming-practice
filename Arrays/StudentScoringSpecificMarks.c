#include <stdio.h>
int main(){
    int n,X,count=0;
    scanf("%d\n%d\n",&n,&X);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==X){
            count++;
        }
    }
    printf("%d",count);
    

}