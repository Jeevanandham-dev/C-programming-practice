#include <stdio.h>
int main(){
    int n,m ;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int maxrow=0;
    int pro2=1;
    for(int j=0;j<m;j++){
        pro2*=arr[0][j];
    }

    
    for (int i=0;i<n;i++){
        int pro=1;
        for(int j=0;j<m;j++){
            pro = pro*arr[i][j];
        }
        if(pro>pro2){
            pro2=pro;
            maxrow=i;
        }

    }
    printf("%d",maxrow);
}