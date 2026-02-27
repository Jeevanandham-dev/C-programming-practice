#include <stdio.h>
#include <string.h>
int main(){
    int count=0;
    char arr[30];
   fgets(arr, sizeof(arr), stdin);
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]==' '){
            count++;
        }
    }
    printf("%d",count);
}