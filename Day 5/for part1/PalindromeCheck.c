#include <stdio.h>
int main(){
    int n,temp,r,rev=0;
    scanf("%d",&n);
    temp=n;
    for(;n!=0;){
        r=n%10;
        rev=(rev*10)+r;
        n/=10;
    }
    if(temp==rev){
        printf("palindrome number");
    }
    else{
        printf("Not a plaindrome number");
    }
}