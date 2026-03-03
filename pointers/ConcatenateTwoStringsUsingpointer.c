#include <stdio.h>
#include <string.h>
void Concat(char *pStr1, char *pStr2){
    strcat(pStr1,pStr2);
    printf("%s",pStr1);

}
int main(){
char str1[100];
scanf("%s\n",str1);
char *pStr1 = str1;
char str2[100];
char *pStr2 = str2;
scanf("%s",str2);
Concat(pStr1,pStr2);
}