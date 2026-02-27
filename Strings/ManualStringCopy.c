#include <stdio.h>
int main(){
    char str[30];
    scanf("%s",str);
    char str2[30];
    for(int i=0;str[i]!='\0';i++){
        str2[i]=str[i];
        printf("%c",str2[i]);
    }
}
