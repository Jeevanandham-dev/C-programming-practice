#include <stdio.h>
#include<string.h>
void Palindrome(char *pStr){
    char str1[100];
    strcpy(str1, pStr); 
    strrev(str1);
    int result = strcmp(str1,pStr);
    if(result ==0){
        printf("Yes");
    }
    else{
        printf("no");
    }
   
   
}
int main(){
    char str[100];
    scanf("%s",str);
    char *pStr = str;
    Palindrome(pStr);
    
}