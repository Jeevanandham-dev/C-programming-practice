#include <stdio.h>
void MultiplicationTable(int n){
    
    for(int i=1;i<=10;i++){
         printf("%d x %d = %d",i,n,i*n);
         printf("\n");
        }
    }
int main(){
    int n;
    scanf("%d",&n);
    MultiplicationTable(n);
}