#include <stdio.h>
#include <stdbool.h>
#include<limits.h>
int main(){
    int n,min=INT_MAX;
    bool found=false;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            if(arr[i]<min){
                min=arr[i];
            }
        found=true;
        }
    }
    if(found){
        printf("%d",min);
    }
    else{
        printf("no positive values");
    }
   
}