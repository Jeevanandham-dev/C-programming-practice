#include <stdio.h>
void CountWords(char *pStr){
    int count=1;
    for(int i =0; pStr[i]!='\0';i++){
        if(pStr[i]==' '){
            count++;
        }
    }
    printf("%d",count);
}
int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    char *pStr = str;
    CountWords(pStr);
}