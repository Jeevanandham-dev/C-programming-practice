#include<stdio.h>
int main(){
    int arr[5],max=0;
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        if(arr[i]>=arr[i+1]){
            arr[i]=arr[i+1]
        }
    }
    printf("%d",max);
}