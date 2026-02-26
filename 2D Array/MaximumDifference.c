#include <stdio.h>
#include <limits.h>
int main(){
    int n,m,sum=0,max=INT_MIN,min=INT_MAX;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        sum=sum+arr[i][j];
        }
        if(sum>max){
            max=sum;
        }
        if(sum<min){
            min=sum;
        }
        sum=0;
    }
    printf("%d",max-min);
    
}