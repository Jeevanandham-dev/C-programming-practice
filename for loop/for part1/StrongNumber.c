#include <stdio.h>
int main(){
    int n,r,fact;
    scanf("%d",&n);
    int temp=n;
    int sum=0;
    for(;temp!=0;){
        r=temp%10;
        fact =1;
        for(int j=r;j>1;j--){
            fact=fact*j;
        }
        temp/=10;
        sum = sum+fact;
    }
    if(sum==n){
        printf("Strong Number");
    }
    else{
        printf("not a strong number");
    }    
}