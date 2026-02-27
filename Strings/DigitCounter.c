#include <stdio.h>
#include <ctype.h>
int main(){
    int count = 0;
    char arr[30];
    scanf("%s",arr);
    for(int i=0;arr[i]!='\0';i++){
        if(isdigit(arr[i])){
            count++;
        }
    }
    printf("%d", count);
}