#include <stdio.h>
void Fibo(int n){
    int sum;
    int first = 0;
    int second = 1;
    printf("%d %d ",first,second);
    for(int i=1;i<=n;i++){
       sum = first+second;
       first =second;
       second = sum;
       printf("%d ",sum);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    Fibo(n);
}