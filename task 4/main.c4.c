#include <stdio.h>
#include <stdlib.h>

int main(){
    int n , c=0;
    printf("Enter the number:\n");
    scanf("%d", &n);
    while(n > 0 ){
        if(n & 1 == 1)
        c += 1;
        n >>=1;
    }
    printf("The count of 1's in the number is %d  ", c);

    return 0;
}
