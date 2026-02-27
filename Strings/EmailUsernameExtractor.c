#include <stdio.h>
int main(){
    char arr[30];
    scanf("%s",arr);
    for(int i=0;arr[i]!='@';i++){
        printf("%c",arr[i]);
    }
}