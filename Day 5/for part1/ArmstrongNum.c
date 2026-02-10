#include <stdio.h>
#include <math.h>

int main() {
    int n,temp,r,count=0,sum=0;
    scanf("%d",&n);
    temp = n;
     for(;temp!= 0;) {
        count++;
        temp/= 10;
    }
    temp = n; 
    while (temp!=0) {
        r = temp % 10;
        sum=sum+pow(r,count);
        temp /= 10;
    }

    if (sum == n)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is not an Armstrong number\n", n);

    return 0;
}
