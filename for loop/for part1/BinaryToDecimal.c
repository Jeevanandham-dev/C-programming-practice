#include <stdio.h>
int main() {
    int n,sum=0,i=0,r;
    scanf("%d", &n);
    for (;n != 0;) {
        r = n%10;              
        sum =sum + r*(1 << i); 
        n /= 10;                 
        i++;                     
    }
    printf("%d\n", sum);
    return 0;
}
