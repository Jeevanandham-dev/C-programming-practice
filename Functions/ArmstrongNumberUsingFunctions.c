#include <stdio.h>
#include <math.h>
void Armstrong(int n){
    int sum=0;
    int count=0;
    int temp=n;
    while(temp!=0){
        count++;
        temp/=10;
    }
    temp=n;
    while(temp!=0){
        sum=sum+pow(temp%10,count);
        temp/=10;
    }
    if(sum==n){
        printf("Armstrong Number");
    }
    else{
        printf("Not Armstrong");
    }

}
int main(){
    int n;
    scanf("%d",&n);
    Armstrong(n);

}