#include <stdio.h>
#include <string.h>
int main(){
    int count=0;
    char ch;
    scanf("%c",&ch);
    char str[30];
    scanf("%s",str);
    
    for(int i=0;str[i]!=0;i++){
        if(str[i]==ch){
            printf("%d",i);
            break;
        }
    }
   
}