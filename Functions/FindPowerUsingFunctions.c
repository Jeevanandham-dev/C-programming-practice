#include <stdio.h>
void LeapYear(int n,int m){
    int ans=1;
    if(m==0) printf("1");
    else{
   while(m>0){
    ans=ans*n;
    m--;
   }
}
   printf("%d",ans);
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    LeapYear(n,m);
}