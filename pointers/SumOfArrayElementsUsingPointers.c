#include <stdio.h>
#include<string.h>
void Sum(int size,int *pArr){
    int sum=0;
    for(int i=0;i<size;i++){
        scanf("%d",&pArr[i]);
        sum+=pArr[i];
    }
    printf("%d",sum);
}
int main(){
    int size;
    scanf("%d\n",&size);
    int arr[size];
    int *pArr = arr;
    Sum(size,pArr);
}