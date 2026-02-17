#include <stdio.h>
int main(){
    int n,countO=0,countE=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            countE++;
        }
        else{
            countO++;
        }
    }
    printf("Even: %d\n",countE);
    printf("Odd: %d",countO);
    

}