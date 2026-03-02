#include <stdio.h>
#include <math.h>
#include <limits.h>
void Max(int *psize){
    int n,max=INT_MIN;
    for(int i=1;i<=*psize;i++){
        scanf("%d",&n);
        int *pn = &n;
        if(*pn>=max){
            max = *pn;
        }
    }
    printf("%d",max);

}
int main(){
    int size;
    scanf("%d",&size);
    int *psize = &size;
    
    Max(psize);

}