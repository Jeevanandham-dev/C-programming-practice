#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    int count=0;
    char arr[30];
    scanf("%s",arr);
    for(int i=0;arr[i]!=0;i++){
        char ch = tolower(arr[i]);
        if(ch!='a'&& ch!='e'&& ch!='i'&& ch!='o'&& ch!='u'){
            count++;
        }
    }
    printf("%d",count);
}                                                  