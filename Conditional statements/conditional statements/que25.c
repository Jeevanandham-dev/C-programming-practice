#include<stdio.h>
int main(){
    int choice,a,b;
    scanf("%d",&choice);
    scanf("%d %d",&a,&b);
    switch(choice){
        case 1:
            printf("%d\n",a+b);
            break;
        case 2:
            printf("%d\n",a-b);
            break;
        case 3:
            printf("%d\n",a*b);
            break;
        case 4:
            printf("%d\n",a/b);
            break;
        default:
            printf("Invalid choice\n");
    }   
    return 0;
}
