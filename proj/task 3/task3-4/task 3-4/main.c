#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b;
    printf("Enter number a");
    scanf("%d",&a);
    printf("Enter number b");
    scanf("%d",&b);

    for(; a<=b; a++){
        printf("%d\n",a);
    }
}
