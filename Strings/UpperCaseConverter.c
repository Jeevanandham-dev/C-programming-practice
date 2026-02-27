#include <stdio.h>
#include <string.h>
int main(){
    char arr[30];
    fgets(arr, sizeof(arr),stdin);
    printf(strupr(arr));
}