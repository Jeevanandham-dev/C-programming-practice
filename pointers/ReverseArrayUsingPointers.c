#include <stdio.h>
#include<string.h>
void Sum(int size,int *pArr){
    for(int i=0;i<size;i++){
        scanf("%d",&pArr[i]);
    }
    for(int i=size-1;i>=0;i--){
        printf("%d ",pArr[i]);
    }
}
int main(){
    int size;
    scanf("%d\n",&size);
    int arr[size];
    int *pArr = arr;
    Sum(size,pArr);
}