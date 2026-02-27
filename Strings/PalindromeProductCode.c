#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main(){
    char arr[30];
    bool pal=true;
    scanf("%s",arr);
    int len =strlen(arr);
    for(int i=0;i<len;i++){
        if(arr[i]!=arr[len-i-1]){
            pal = false;
        }
    }
    if(pal){
        printf("palindrome");
    }
    else{
        printf("Not a palindrome");
    }
}