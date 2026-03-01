#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int *pn = &n;
    int *pm = &m;
    int temp;
    temp = *pn;
    *pn = *pm;
    *pm = temp;
    printf("%d %d",n,m);
}