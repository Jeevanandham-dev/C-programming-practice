#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);  
    
    switch(a){
        case 'A':
            printf("Vowel");
            break;
        case 'E':
            printf("Vowel");
            break;
        case 'I':
            printf("Vowel");
            break;
        case 'O':
            printf("Vowel");
            break;
        case 'U':
            printf("Vowel");
            break;
        default:
            printf("Invalid operator\n");
    }
    
    return 0;
}