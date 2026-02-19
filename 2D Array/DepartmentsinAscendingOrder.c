#include <stdio.h>
#include <stdbool.h>
int main(){
    int n,m,count=0;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);  
        }
    }
    
    for(int i=0;i<n;i++){
        bool asc=true;
        for(int j=0;j<m-1;j++){
            if(arr[i][j]>arr[i][j+1]){
               asc=false;
               break;
            }
    }
    if(asc){
        count++;
    }
}
printf("%d",count);
}