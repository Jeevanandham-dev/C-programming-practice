#include <stdio.h>
void Area(int r){
    float area=3.14*r*r;
    printf("%.2f",area);

}
int main(){
    int r;
    scanf("%d",&r);
    Area(r);
}