#include <stdio.h>
#include <string.h>
#include <ctype.h>
void Vowels(char *pword){
    int count=0;
    
    for(int i=0;i<=strlen(pword);i++){
        char ch = tolower(pword[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' ){
            count++;
        }
    }
    printf("%d",count);
}    


void main(){
    char word[100];
    fgets(word, sizeof(word),stdin);
    char *pword = word;
    Vowels(pword);

}