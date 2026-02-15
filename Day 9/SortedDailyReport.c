#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    bool asc=true;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){
            asc=false;
            
        }
    }
    if(asc){
        printf("yes");
    }
    else{
        printf("no");
    }
    

}