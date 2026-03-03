#include <stdio.h>
int Search(int *arr,int size,int target) {
    for(int i=0;i<size;i++) {
        if(arr[i]==target)
            return i;
    }
    return -1;
}

int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++) {
        scanf("%d", &arr[i]);
    }
    int target;
    scanf("%d", &target);
    int result = Search(arr,size,target);
    printf("%d", result);
    return 0;
}