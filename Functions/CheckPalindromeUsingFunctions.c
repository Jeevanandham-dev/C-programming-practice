#include <stdio.h>
void Palindrome(int n){
    int rev=0;
    while(n!=0){
        rev = (rev*10)+n%10;
        n/=10;
    }
    if(rev==n){
        printf("Palindrome");
    }
    else{
        printf("Not a palindrome");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    Palindrome(n);
}