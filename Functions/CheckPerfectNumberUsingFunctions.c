#include <stdio.h>
void PerfectNumber(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(n==sum){
        printf("perfect Number");
    }
    else{
        printf("Not perfect Number");
    }

}

int main(){
    int n;
    scanf("%d",&n);
    PerfectNumber(n);
}