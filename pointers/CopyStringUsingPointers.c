#include <stdio.h>
#include <string.h>
void CopyStrings(char *ptr){
       char str1[100];
       printf(strcpy(str1,ptr));
}
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    char *pstr = str;
    CopyStrings(pstr);

}