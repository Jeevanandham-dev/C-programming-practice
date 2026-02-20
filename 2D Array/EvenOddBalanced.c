#include <stdio.h>
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
       int Ecount=0,Ocount=0;
        for(int j=0;j<m;j++){
            if(arr[i][j]%2==0){
                Ecount++;
            }
            else{
                Ocount++;
            }
        }
        if(Ecount==Ocount){
                count++;
            }
    }
    printf("%d",count);


}