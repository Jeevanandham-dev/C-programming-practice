#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main(){
    bool Up=false;
    char arr[100];
    scanf("%s",arr);
    for(int i=0;arr[i]!='\0';i++){
        if(isupper(arr[i])){
            Up=true;
            break;
        }
    }
     if(Up){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }

}